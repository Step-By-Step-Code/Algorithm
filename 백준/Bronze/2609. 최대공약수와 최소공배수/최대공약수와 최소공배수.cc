#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N1, N2;
    cin >> N1 >> N2;
    if(N1<N2) swap(N1, N2);

    int Greatest_Common_Factor = 1;
    int Least_Common_Multiple = N1*N2;

    for(int i=1; i<=N1; i++){
        if((N1%i)==0 && (N2%i)==0) {
            if(i > Greatest_Common_Factor) Greatest_Common_Factor = i;
        }
    }
    for(int i=N1; i<=N1*N2; i++){
        if((i%N1)==0 && (i%N2)==0){
            if(i < Least_Common_Multiple) {
                Least_Common_Multiple = i;
                break;
            } 
        }
    }
    cout << Greatest_Common_Factor << "\n" << Least_Common_Multiple;
    
    return 0;
}