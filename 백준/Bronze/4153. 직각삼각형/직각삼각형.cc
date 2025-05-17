#include <stack>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int input1, input2, input3;
    vector<int> side;
    while (1) {
        cin >> input1 >> input2 >> input3;
        if (input1 == 0 && input2 == 0 && input3 == 0) break;
        side.push_back(input1);
        side.push_back(input2);
        side.push_back(input3);

        sort(side.begin(), side.end());
        if ((side[2] * side[2]) == ((side[1] * side[1]) + (side[0] * side[0]))) cout << "right" << "\n";
        else cout << "wrong" << "\n";

        side.clear();
    }
    return 0;
}