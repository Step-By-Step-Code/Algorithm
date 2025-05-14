#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector<int> input;
	int temp;
	int best = 0;
	int best_num = 0;
	for (int i = 0;i < 9;i++) {
		cin >> temp;
		if (temp > best) {
			best = temp;
			best_num = i+1;
		}
	}
	cout << best << "\n" << best_num << "\n";

	return 0;
}