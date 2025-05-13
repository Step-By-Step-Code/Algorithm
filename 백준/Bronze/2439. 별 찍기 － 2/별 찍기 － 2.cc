#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int input1;
	cin >> input1;
	for (int i = 0;i < input1;i++) {
		for (int j = 0;j < input1;j++) {
			if (j >= input1 - i -1) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}



	return 0;
}