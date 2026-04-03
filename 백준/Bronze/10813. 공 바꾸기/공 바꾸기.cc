#include <iostream>
#include <vector>
using namespace std;

// https://www.acmicpc.net/problem/10813

int main() {
    int total, count;
    
    cin >> total >> count;
    vector<int> basket(total);
    for (int i = 1;i <=total;i++) basket[i-1] = i;

    int input1, input2, temp;

    for (int i = 0;i < count;i++){
        cin >> input1 >> input2;
        temp = basket[input1 - 1];
        basket[input1 - 1] = basket[input2 -1];
        basket[input2 - 1] = temp;
    }
    
    for (int i = 1;i <=total;i++) cout << basket[i-1] << " ";
    return 0;
}
