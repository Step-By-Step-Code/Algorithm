#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int input;
	cin >> input;

	for (int i = 1;i <= 9;i++) cout << input << " * " << i << " = " << input * i << endl;
	
	return 0;
}