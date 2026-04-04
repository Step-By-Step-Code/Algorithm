#include <iostream>
#include <vector>
using namespace std;

int main() {
    int input_1, input_2;
    cin >> input_1 >> input_2;
    vector<int> v(input_1);

    for(int i=0; i < input_1 ;i++){
        cin >> v[i];
    }
    int result = 0;
    int temp = 0;
    for(int i=0; i < input_1 - 2; i++){
        for(int j = i+1;j < input_1 - 1;j++){
            for(int k = j+1;k < input_1;k++){
                if((v[i]+v[j]+v[k]) <= input_2) temp =v[i]+v[j]+v[k];
                if(result < temp) result = temp;
            }
        }
    }
    
    cout << result << endl;

    return 0;
}
