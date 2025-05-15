#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int A, B, C;
	cin >> A >> B >> C;
	string sum = to_string(A * B * C);
	int array[10] = {0,};
	int num;
	for (auto it = sum.begin(); it != sum.end(); it++) {
		num = *it - '0';
		array[num]++;
	}

	for (int i = 0;i < 10;i++) cout << array[i] << "\n";

	return 0;
}