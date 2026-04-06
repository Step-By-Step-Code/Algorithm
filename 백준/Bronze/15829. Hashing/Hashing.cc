#include <iostream>
#include <vector>
using namespace std;

int main() {
    int input_1;
    cin >> input_1;

    vector<char> v(input_1);
    const unsigned long long MOD = 1234567891;

    unsigned long long result = 0;
    unsigned long long power = 1;   // 31^0

    for(int i = 0; i < input_1; i++){
        cin >> v[i];

        result = (result + (v[i] - 'a' + 1) * power) % MOD;
        power = (power * 31) % MOD;   // 다음 거듭제곱
    }

    cout << result << endl;
    return 0;
}