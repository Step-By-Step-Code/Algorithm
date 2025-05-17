#include <stack>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // 1. N 입력 -> int
    // 2. 0 ~ N-1까지 반복문 진행
        // i를 문자열로 치환 -> num_array
        // 각 자리의 수의 합산을 구함 -> sum
            // sum + i와 N이 같으면 생성자
        

    int N;
    cin >> N;

    for (int i = 1;i < N;i++) {
        int sum = 0;
        string num_array = to_string(i);
        for (auto it = num_array.begin();it != num_array.end();it++) {
            sum += *it - '0';
        }
        if ((i+sum) == N) {
            cout << i;
            return 0;
        }
    }
    cout << '0';
    return 0;
}