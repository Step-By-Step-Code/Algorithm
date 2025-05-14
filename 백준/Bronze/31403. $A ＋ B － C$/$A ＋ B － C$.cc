#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string input1, input2, input3;
	cin >> input1 >> input2 >> input3;
	int num1 = stoi(input1);
	int num2 = stoi(input2);
	int num3 = stoi(input3);
	int sum = stoi(input1 + input2) - stoi(input3);
	cout << num1 + num2 - num3 << "\n";
	cout << sum << "\n";

	return 0;
}