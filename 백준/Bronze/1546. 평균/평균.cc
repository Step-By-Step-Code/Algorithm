#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int input_1;
    cin >> input_1;
    float result = 0;

    vector<float> v(input_1);

    for(int i = 0; i < input_1; i++){
        cin >> v[i];
    }

    float maxVal = *max_element(v.begin(), v.end());
    
    for(int i = 0; i < input_1; i++){
        result += v[i] / maxVal * 100;
    }
    result = result / (float)input_1;

    
    cout << result << endl;
    return 0;
}