#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int input;
	vector<int> a;

	for (int i = 0;i < 2;i++) { 
		cin >> input;
		a.push_back(input);
	}

	a.push_back(a[1] - a[0]);
	
	if (a[2] > 0) cout << "<" << endl;
	else if (a[2] < 0) cout << ">" << endl;
	else cout << "==" << endl;


	return 0;
}