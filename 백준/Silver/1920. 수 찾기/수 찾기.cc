#include <iostream>
#include <unordered_set>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int N, M, num;
	std::cin >> N;
	std::unordered_set<int> A;

	while (N--) {
		std::cin >> num;
		A.insert(num);
	}
	std::cin >> M;
	while (M--) {
		std::cin >> num;
		std::cout << (A.count(num) ? 1 : 0) << '\n';
	}

	return 0;
}