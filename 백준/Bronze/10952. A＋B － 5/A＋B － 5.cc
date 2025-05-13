#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int input1, input2;
	while (cin >> input1 >> input2) {
		if ((input1 == 0) && (input2 == 0)) break;
		cout << input1 + input2 << "\n";
	}


	return 0;
}