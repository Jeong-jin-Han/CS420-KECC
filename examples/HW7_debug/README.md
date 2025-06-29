model solution 과 비교하면서 직접 테스트 해보기 

지금 현재로서는 kecc-reference binary파일이 없기 때문에 이렇게 해야함

kecc interp (expected): 1, qemu: 1
[testing asmgen for "examples/ir0/switch-in-loop.ir"]
IR file successfully saved at: /home/hanjeongjin/Workspace_ubuntu/cs420_ubuntu/kecc-private/examples/HW7_debug/my.s
kecc interp (expected): 9, qemu: 1

thread 'test_examples_asmgen_small' panicked at src/tests.rs:490:5:
assertion `left == right` failed
  left: 9
 right: 1


####################################################
stack pointer offset 계산

정적 호출(call) vs 동적 호출(jalr)
미리 함수가 먼저 정의되면 call로 함
함수가 정의되지 않고 symbol만 안다면 jalr로 함

-> 
정적 호출인지 동적호출인지 알기 위해서는 callee함수 block 먼저 나오는지 유무에 따라서
([함수 이름 -> "정적 vs 동적"])
동적 호출이면 saved register중 임의로 하나를 골라서 사용하기  
사용 전에 이전값을 백업해두기
그리고 caller 함수의 마지막 block에서 이전값으로 다시 재할당시키기


instruction중에서 call이 있는 block의 경우 

계산
ra(8) + s0(8) + total_size(local allocation) + total_size(bakcup for function execution) + total_size(parameter pass through the function) 


언제 stack은 생성되고 소멸되는가?
만약에 function call이 존재하는 순간
b0 <- 에서 스택 생성하고 소멸함

bT <- 애서 스택 생성하고 소멸함
만약에 여러개의 bT가 존재한다면 각 terminated block에 대해서 소멸 작업을 해주어야 함


return 이 type을 기반으로 해서
16B가 넘는지 넘지 않는지를 판단하기

넘는다면 a0를 stack pointer로 만들어줘서 나중에 값을 전달해줄 공간을 마련해주어야 하고

그렇지 않은 경우에는 a0, a1 reg로도 충분히 전달될 수 있음


##########################
모든 함수가 공용으로 가지고 있어야 할 것
caller - callee map



###########################
GEP 때문에 stack에 할당??

callee는 자기가 callee인 것을 모르니
이를 callee취급해주는 caller가 넣어주기 만약에 long data인 경우 -> argument를 스택에 넣어주기
나머지 작은 데이터의 경우 -> load - store tracer로 처리하는 것이 가능함


지금 확인해야할 것
callee를 위한 자리를 마련한 경우 callee가 해당 영역에 대해서 값을 작성했을 때
항상 그 값을 copy하기 위한 자리가 마련되는가?


함수 parameter 는 shost인데
return은 long인 경우 <- okay 
test3

함수 paramter 는 long인데
return도 long인 경우 <- okay
test6 <- test6의 경우에서는 추가적인 copy 그런 것이 보이지 않음


callee 함수가 아닌 지금 caller 함수에서의 차이를 봐야 함
caller 함수는 지금 둘 다 패턴이 0인데 무엇이 문제일까?


parameter는 long인데 return은 short인 경우?

struct를 argument로 넣는 과정 속에서 elt로 할당해준 다음에
다시 copy를 함
그리고 함수에 넣는 방식?


GEP 할당 부분이 누락됨
GEP의 경우 블락마다가 아니라 블락 전반에 대해서 한 다음에 한 번만 더해주어야 함 <- Global하게 다루어주기

GEP가 맞는 것 같기는 한데 중복해서 더해지는 것이 있어서 이 문제를 어떻게 해결해야 할까?

그런데 GEP를 고려해준다는 것 자체가 allocation을 고려해주는 것과 같은 말인데.... 

allocation을 고려했는데 이 부분을 다시 고려하는 것은 아닌 것 같음


caller_offset과 allocation_offset 과 겹치는 것이 있는지 없는지 검토해야할 것 같음

그런데 예를 들어서
load를 하더라도 return과 allocation이 다르게 나올 수 있던데

지금 ir0 와 ir4 struct3.ir에 대해서 분석하게 되면
둘 다 공통적으로 load-store tracer는 다 없어

단지 is_data_long에서 나온 offset일뿐
지금 현재 is_data_long은 각 instruction의 dtype에 대해서 분석하는 것

main 함수에서

  %b0:i39:struct Big = load %l0:struct Big*
  %b0:i40:struct Big = call @foo:[ret:struct Big params:(struct Big)]*(%b0:i39:struct Big)

GEP를 추적한다는 것이 각 location에 대해서 하는 것은 맞는데
그 위치 선정이 중요할 듯

무엇인가 arguement 대상으로 넣어주거나
arguement 대상으로 값을 빼오거나 

할 때 복사해서 진행을 하는 것 같던데

지금 현재 나의 구현에서 이 부분을 잘 고려했는지를 분석해야 할 듯


그리고 왜 store 한 뒤 load를 기준으로 분석을 진행해야 할까?
단순히 경험적인 이유말고 특별한 이유가 없을까?


assign과 callee가 동일한 취급을 받을 수도 <-이 케이스를 어떻게 생각해야 할까?

caller -callee 관계 분석으로 

다른 함수에서 받아도 callee가 arg역할을 수행한다.

if param_long -> not always,
already allocate or not 으로 확인하기 <- 아닌데


param_long은 아니지만 하나가 더 추가된 이유가 무엇일까? 
callee로 읺해서 +3이 추가가 되는 것은 맞는데

나머지 3은 return value를 위해서 추가 된 것 같음

allocation +3
caller +3 <- 여기서 3이 나오면 안되는 것이었나??>
frame, ra, saved_reg +3
callee +3
return +3


call에 대한 것을 넣어줄 때

call에 대한 것의 경우 우리가 따로 처리를 해준다.
return type이런식으로?? call에 대한 것은 제외


아니면 stac_offset + ret_type을 제외하던지 


둘 주의 하나인데 

stack_offset + ret_type을 하지 않을 경우?? -> 어떤 문제가 발생할까?
callee 경우는 okay미리 더해줌


ra+frame+saved 3
allocation_offset 3
caller_offset 3 <- 
return type 3
callee_offset 3


allocation offset 
(1) store에서 value가 local과 다른 경우에 type 동일

(2) Call의 argument가 local과 다른 경우에 type 동일

둘 다 return tpye > 2라는 동일한 조건

test6.ir
  %b0:i0:struct %t0 = call @make_point:[ret:struct %t0 params:(i32, i32)]*(1:i32, 2:i32)
  %b0:i1:unit = store %b0:i0:struct %t0 %l0:struct %t0*

  <- 아마 이미 return type으로 고려되어서 ??


ir0/struct3.ir
  %b0:i40:struct Big = call @foo:[ret:struct Big params:(struct Big)]*(%b0:i39:struct Big)
  %b0:i41:unit = store %b0:i40:struct Big %l1:struct Big*

  <- 여기서는 왜 정확했던 거지? 여기서도 returny type으로 고려된다는 것은 동일한데

  argument가 const의 경우에는 temp 더라도 arg와 같은 효과

  MEM -> copy -> MEM이 아니라 arg -> MEM과 같은 효과라 할 수 있음

  그래서 이 tmp reg가 단순히 상수항인지 아닌지를 구별할 필요가 있음


  return이 2개가 나오는 경우 어떻게 해결해야할까?
  


