#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	unsigned int input;
	cin >> input;

	if (!(input % 400)) cout << 1;
	else if (!(input % 4) && (input % 100)) cout << 1;
	else cout << 0;
	
	return 0;
}