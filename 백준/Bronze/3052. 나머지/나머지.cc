#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int input1;

	vector<int> a;
	for (int i = 0; i < 10;i++) {
		cin >> input1;
		a.push_back(input1 % 42);
	}
	sort(a.begin(), a.end());
	a.erase(unique(a.begin(), a.end()), a.end());
	cout << a.size();
	

	return 0;
}