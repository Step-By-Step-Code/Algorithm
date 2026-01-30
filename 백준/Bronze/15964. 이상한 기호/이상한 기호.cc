#include <iostream>

using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;

    long long result = (A + B) * (A - B); // 또는 A*A - B*B
    cout << result << "\n";
    return 0;
}