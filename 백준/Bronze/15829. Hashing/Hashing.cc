#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int input_1;
    cin >> input_1;
    vector<char> v(input_1);
    unsigned long long result = 0;

    for(int i=0; i < input_1 ;i++){
        cin >> v[i];
        result += (static_cast<unsigned long long>(v[i] -'a' + 1) * static_cast<unsigned long long>(pow(31, i))) % 1234567891;
    }
    
    cout << result << endl;

    return 0;
}
