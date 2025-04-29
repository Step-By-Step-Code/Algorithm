# `<unordered_set>`

## 1. 개요
- C++11부터 표준 라이브러리에 추가된 해시 기반 **연관 컨테이너**
- 내부적으로 **해시 테이블**을 사용하여 요소를 저장
- **중복을 허용하지 않음**

## 2. 포함 방법
```cpp
#include <unordered_set>
```

## 3. 주요 특징 → 순서가 상관없고 중복을 허용하지 않음
- **평균 시간 복잡도**  
  - 검색, 삽입, 삭제 모두 **O(1)**
  - 최악의 경우(해시 충돌 심한 경우) **O(n)**
- **순서 불보장**  
  - 저장된 순서와 실제 순회 순서는 다를 수 있음
- **중복 제거**  
  - 같은 값이 두 번 들어가지 않음

## 4. 주요 멤버 함수

| 함수                                 | 설명                                              |
| ------------------------------------ | ------------------------------------------------- |
| `insert(const Key& k)`               | 요소 `k`를 삽입. 성공 시 `(iterator, true)` 반환 |
| `erase(const Key& k)`                | 키 `k`를 삭제. 삭제된 요소 개수 반환             |
| `find(const Key& k)`                 | 키 `k` 검색. 있으면 iterator, 없으면 `end()`     |
| `count(const Key& k)`                | 키 `k` 존재 개수(0 또는 1) 반환                  |
| `size()`                             | 현재 요소 개수 반환                              |
| `empty()`                            | 비어 있으면 `true`                                |
| `clear()`                            | 모든 요소 삭제                                    |
| `bucket_count()`                     | 현재 버킷(해시 슬롯) 개수 반환                   |
| `load_factor()`                      | `(size() / bucket_count())`                       |
| `rehash(size_type n)`                | 버킷 수를 최소 `n` 이상으로 재조정                |

## 6. 사용 예제

```cpp
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;

    // 요소 삽입 (중복 삽입은 무시)
    s.insert(10);
    s.insert(20);
    s.insert(10);  // 중복 → 삽입되지 않음

    // count를 이용한 존재 여부 확인
    cout << "10의 개수: " << s.count(10) << "\n";  // 1
    cout << "30의 개수: " << s.count(30) << "\n";  // 0

    if (s.count(20)) {
        cout << "20이 존재합니다.\n";
    } else {
        cout << "20이 존재하지 않습니다.\n";
    }

    // 현재 크기
    cout << "집합 크기: " << s.size() << "\n";  // 2

    // 삭제
    s.erase(10);
    cout << "10 삭제 후 크기: " << s.size() << "\n";  // 1

    return 0;
}
```
