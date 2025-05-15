#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string input1;
	getline(cin, input1);
	int count = 0;
	int temp = 0;
	input1.push_back(' ');
	for (auto it = input1.begin();it != input1.end();it++) {
		if (('A' <= *it && *it <= 'Z') || ('a' <= *it && *it <= 'z'))  temp = 1;
		else{
			if (temp == 1) {
				temp = 0;
				count++;
			}
		}
	}
	cout << count;

	return 0;
}