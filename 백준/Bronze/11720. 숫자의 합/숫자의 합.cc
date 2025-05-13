#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int sum = 0;
	int len;
	string number;
	cin >> len >> number;
	for (int i = 0;i < len;i++) sum += number[i] - '0';

	cout << sum;



	return 0;
}