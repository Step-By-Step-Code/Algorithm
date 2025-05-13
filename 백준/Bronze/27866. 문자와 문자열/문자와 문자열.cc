#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	

	string input1;
	int input2;
	cin >> input1;
	cin >> input2;
	cout << input1[input2-1];



	return 0;
}