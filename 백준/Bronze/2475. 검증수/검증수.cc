#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int sum = 0;
	int input;

	for (int i = 0;i < 5;i++) {
		cin >> input;
		sum += input * input;
	} 
	sum = sum % 10;

	cout << sum << endl;

	return 0;
}