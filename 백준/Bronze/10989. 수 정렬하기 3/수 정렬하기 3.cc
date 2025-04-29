#include <iostream>
#include <unordered_set>
#include <algorithm>

int cnt[10001];

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int N;
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		int x;
		std::cin >> x;
		cnt[x]++;
	}

	for (int i = 1;i <= 10000; i++) {
		while (cnt[i]--) {
			std::cout << i << '\n';
		}
	}
	return 0;
}