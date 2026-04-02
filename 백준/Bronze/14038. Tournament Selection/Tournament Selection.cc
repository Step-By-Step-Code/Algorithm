#include <iostream>
using namespace std;

int main() {
    char A;
    int memory = 0;
    int result = -1;
    for(int i = 0; i < 6; i++){
        cin >> A;
        if(A == 'W') memory++;
    }
    if(memory == 1 || memory == 2 ) cout << 3 << endl;
    else if(memory == 3 || memory == 4 ) cout << 2 << endl;
    else if(memory == 5 || memory == 6 ) cout << 1 << endl;
    else cout << -1 << endl;

    return 0;
}