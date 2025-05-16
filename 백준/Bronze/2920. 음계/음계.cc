#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int input1;

	vector<int> a;
	vector<int> asc = { 1,2,3,4,5,6,7,8 };
	vector<int> desc { 8,7,6,5,4,3,2,1};
	for (int i = 0; i < 8;i++) {
		cin >> input1;
		a.push_back(input1);
	}
	
	if (a == asc) cout << "ascending";
	else if (a == desc) cout << "descending";
	else cout << "mixed";

	return 0;
}