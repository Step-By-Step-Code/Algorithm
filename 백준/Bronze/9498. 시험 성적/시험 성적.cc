#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	unsigned int input;
	cin >> input;

	if (input >= 90) cout << "A";
	else if (input >= 80) cout << "B";
	else if (input >= 70) cout << "C";
	else if (input >= 60) cout << "D";
	else cout << "F";
	return 0;
}