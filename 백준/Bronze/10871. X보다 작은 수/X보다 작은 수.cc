#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector<int> vec;
	int input1, input2, input3;
	cin >> input1;
	cin >> input2;

	for (int i = 0; i < input1;i++) {
		cin >> input3;
		vec.push_back(input3);
	}
	for (const auto& elem : vec) if (elem < input2) cout << elem << " ";


	return 0;
}