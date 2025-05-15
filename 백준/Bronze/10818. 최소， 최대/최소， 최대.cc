#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int input1, input2;
	cin >> input1;
	int max = -1000000, min = 1000000;

	while (input1--) {
		cin >> input2;
		if (max < input2) max = input2;
		if (min > input2) min = input2;
	}
	cout << min << " " << max << "\n";


	return 0;
}