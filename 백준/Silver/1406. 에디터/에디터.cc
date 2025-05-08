#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string init;
	cin >> init;

	int N;
	cin >> N;

	stack<char> Left, Right;

	for (char c : init) Left.push(c);

	while (N--) {
		char cmd;
		cin >> cmd;

		if (cmd == 'L') {
			if (!Left.empty()) {
				Right.push(Left.top());
				Left.pop();
			}
		}
		else if (cmd == 'D') {
			if (!Right.empty()) {
				Left.push(Right.top());
				Right.pop();
			}
		}
		else if (cmd == 'B') {
			if (!Left.empty()) {
				Left.pop();
			}
		}
		else if (cmd == 'P') {
			char adding;
			cin >> adding;
			Left.push(adding);
		}
		
		
	}

	while (!Left.empty()) {
		Right.push(Left.top());
		Left.pop();
	}

	while (!Right.empty()) {
		cout << Right.top();
		Right.pop();
	}


	return 0;
}