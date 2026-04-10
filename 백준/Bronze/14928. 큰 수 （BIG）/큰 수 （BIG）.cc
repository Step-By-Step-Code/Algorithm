#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    cin >> N;

    const int MOD = 20000303;
    long long rem = 0;

    for (char c : N) {
        rem = (rem * 10 + (c - '0')) % MOD;
    }

    cout << rem << '\n';
    return 0;
}