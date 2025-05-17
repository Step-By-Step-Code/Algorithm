#include <stack>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // 1. 사람의 수, 사이즈 6개, 묶음 단위 T, P
        // int, vector, int
    // 2. 각 사이즈별로 T를 나눔
        // 0일 때 계산을 하지 않음
        // 나머지가 0일 때 SIZE/T, 나머지가 0이 아닐 때 SIZE/T + 1;
    // 3. 처음 출력 N/T, 다음 출력 N%T

    int N;
    int size_input;
    vector<int> size;
    int T, P;
    int sum = 0;
    cin >> N;
    for (int i = 0;i < 6;i++) {
        cin >> size_input;
        size.push_back(size_input);
    }
    cin >> T >> P;

    for (int i = 0;i < 6;i++) {
        if (size[i] == 0) continue;
        if ((size[i] % T) == 0) sum += size[i] / T;
        else sum += (size[i] / T) + 1;
    }
    cout << sum << "\n";
    cout << N / P << " " << N % P;

    return 0;
}