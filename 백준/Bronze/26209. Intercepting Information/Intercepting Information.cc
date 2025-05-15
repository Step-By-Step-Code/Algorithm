#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int input1;
	string result = "S";
	for (int i = 0;i < 8;i++) {
		cin >> input1;
		if (input1 == 0 || input1 == 1) continue;
		else result = "F";
	}
	cout << result << "\n";
	return 0;
}