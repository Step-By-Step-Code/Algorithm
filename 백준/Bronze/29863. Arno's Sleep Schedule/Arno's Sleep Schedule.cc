#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if(A >= 20 && A <= 23) {
        cout << 24 - A + B << endl;
    }
    else {
        cout << B - A << endl;
    }

    return 0;
}
