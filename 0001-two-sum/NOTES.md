# 1. 시간, 공간 복잡도 파악 및 활용
- 1차원 배열에 대한 이중 for문의 경우 시간복잡도는 o(n^2), 공간복잡도는 o(1)
  => 시간 복잡도 o(n), 공간 복잡도 o(n)으로 변환시킬 수 있다. 공간 복잡도를 늘려 시간을 절약하는 알고리즘 구현 가능

- 예제
  - 하나의 배열을 이중 for문을 통해 순환하면서 합이 target과 같아지는 두 숫자 쌍을 찾는다 --> 시간 복잡도 o(n^2), 공간 복잡도 o(1)
  - 하나의 배열을 단일 for문을 통해 순환하면서 map 자료구조에 지나간 index, 해당하는 value를 기록하며 target과 합이 같은 두 숫자 쌍을 찾는다 --> 시간 복잡도 o(n), 공간 복잡도 o(n)

# 2. vector, map 자료구조 사용하기
- vector 자료구조
  - 선언 : vector<type> 변수명
  - 값 입력하기 : vec.push_back()
  - 크기 얻기 : vec.size()
- map 자료구조
  - 선언 : map<type,type> 변수명
  - (key,value) 입력하기 : map.insert(index,value)
  - key 찾기 : map.find(key)
    - 찾았을 경우 해당하는 index return
    - 찾지 못할 경우 map.end() return
  - key에 해당하는 value 얻기 : map.find(key) -> second
    - map[key] --> 이렇게 해도 되긴 하는데..속도는 위가 조오금 더 빠른 것으로 나옴
