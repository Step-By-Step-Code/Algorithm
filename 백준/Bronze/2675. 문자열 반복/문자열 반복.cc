#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int input1, input2;
	string str;
	cin >> input1;
	
	while (input1--) {
		cin >> input2;
		cin >> str;
		for (auto it = str.begin();it != str.end();it++) {
			for(int i=0;i < input2;i++) cout << *it;
		}
		cout << "\n";
	}
	
	return 0;
}