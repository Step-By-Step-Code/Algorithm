#include <iostream>
using namespace std;

int main() {
    int A, B, C, D, E;
    cin >> A >> B >> C >> D;

    E = A + B + C + D;
    if(E <= 1500) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
