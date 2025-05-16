#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int input1;
	string test;
	cin >> input1;
	while (input1--) {
		int sum = 0;
		int present = 0;
		cin >> test;
		for (auto it = test.begin(); it != test.end(); it++) {
			if (*it == 'O') {
				present++;
				sum += present;
			}
			else present = 0;
		}
		cout << sum << "\n";
	}


	return 0;
}