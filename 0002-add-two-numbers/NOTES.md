# 1. 연산의 결과를 담는 새로운 container를 꼭 만들 필요는 없다
  - 변수의 보존이 필요하지 않다면, 존재하던 변수를 그대로 이용하는 것이 효율적이다.
  - 예제
    - List1과 List2를 더하는 경우, 새로운 List3를 만들지 않고 List1에 List2를 더해준다.

# 2. Linked List 사용방법
  - pointer를 이용해 값을 접근, 배열간 연결을 수행한다.
  - pointer를 사용하므로, 새로운 노드를 만들때는 pL->next = new Class(); 로 생성한다.
  - next listnode가 존재하는지는 next에 해당하는 ptr이 nullptr인지 아닌지로 판단한다.
  - return시에는 head를 제공해야하기 때문에, head를 기록하는 변수가 반드시 필요하다.
