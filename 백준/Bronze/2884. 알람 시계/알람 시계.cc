#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int input1, input2;
	cin >> input1 >> input2;
	int min;
	int hour;
	if (input2 >= 45) {
		min = input2 - 45;
		hour = input1;
	}
	else {
		min = 60 + input2 - 45;
		if ((input1 - 1) >= 0) hour = input1 - 1;
		else hour = 23;
	}

	cout << hour << " " << min << "\n";

	return 0;
}