#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int a1, a2, a3, a4, a5, a6;
	cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;
	int sum = a1 + a2 + a3 + a4 + a5 + a6;
	cout << sum * 5 << "\n";
	return 0;
}