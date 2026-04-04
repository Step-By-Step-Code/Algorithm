#include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;
    if(input == 1) {
        cout << 1 << endl;
        return 0; 
    }
    int n = 0;

    while(1){
        if(input <= (3*n*(n-1) + 1)) break;
        n++;
    }
    int result = n;
    cout << result << endl;
    
    return 0;
}
