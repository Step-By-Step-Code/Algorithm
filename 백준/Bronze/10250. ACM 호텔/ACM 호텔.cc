#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int input1;
	cin >> input1;
	string front_num;
	string rear_num;
	vector<string> space;

	while (input1--) {
		int H, W, N;
		cin >> H >> W >> N;
		if (N % H == 0) front_num = to_string(H);
		else front_num = to_string(N % H);

		if ((((N-1) / H) + 1) >= 10) rear_num = to_string(((N - 1) / H) + 1);
		else rear_num = '0' + to_string(((N - 1) / H) + 1);
		space.push_back(front_num + rear_num);
	}

	for (auto it = space.begin(); it != space.end(); it++) {
		cout << *it << "\n";
	}

	return 0;
}