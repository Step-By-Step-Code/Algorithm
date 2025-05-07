#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector <int> st;
	while (N--) {
		string cmd;
		cin >> cmd;

		if (cmd == "push") {
			int x;
			cin >> x;
			st.push_back(x);
		}
		else if (cmd == "pop") {
			if (st.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << st.front() << "\n";
				st.erase(st.begin());
			}
		}
		else if (cmd == "size") {
			cout << st.size() << "\n";
		}
		else if (cmd == "empty") {
			cout << (st.empty()?1:0) << "\n";
		}
		else if (cmd == "front") {
			if (st.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << st.front() << '\n';
			}
		}
		else if (cmd == "back") {
			if (st.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << st.back() << '\n';
			}
		}
	}
	return 0;
}