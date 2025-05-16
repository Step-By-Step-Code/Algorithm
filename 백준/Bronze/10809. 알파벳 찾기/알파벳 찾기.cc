#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> alpha((int)'z' - (int)'a' + 1, -1);
	string test;
	cin >> test;
	for (int i = 0; i < test.size(); i++) {
		if (alpha[(int)test[i] - 'a'] == -1) alpha[(int)test[i] - 'a'] = i;
		else continue;
	}

	for (auto it = alpha.begin();it != alpha.end();it++) {
		cout << *it << " ";
	}

	return 0;
}