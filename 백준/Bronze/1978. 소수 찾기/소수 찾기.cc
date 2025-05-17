#include <stack>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // 1. N, N개의 수 입력 
        // input : int, int -> N, input
        // count, result 선언
    // 2. N만큼 반복문 생성 -> 1부터 입력된 수 - 1까지 나누기 연산
        // 1이면 continue
    // 3. % 연산 후 나머지가 0이면 count 1증가 아니면 그대로
    // 4. count 개수가 1이면 소수

    int N, input1;
    cin >> N;
    int count = 0;
    int result = 0;
    while (N--) {
        cin >> input1;
        if (input1 == 1) continue;
        for (int i = 1;i < input1;i++) {
            if ((input1 % i) == 0) count++;
        }
        if (count == 1) result++;
        count = 0;
    }
    cout << result;
    return 0;
}