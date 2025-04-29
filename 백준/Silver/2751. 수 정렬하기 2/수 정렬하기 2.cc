#include <iostream>
#include <unordered_set>
#include <algorithm>
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int N;
	std::cin >> N;
	std::vector<int> a(N);
	for (int i = 0; i < N; i++) std::cin >> a[i];

	std::sort(a.begin(), a.end());

	for (int i = 0; i < N; i++) std::cout << a[i] << "\n";
	return 0;
}