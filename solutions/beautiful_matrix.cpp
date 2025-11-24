#include<iostream>
#include<cmath>
int main() {
	int x, y;
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			int num; std::cin >> num;
			if (num == 1) {
				x = i + 1;
				y = j + 1;
			}
		}
	}
	std::cout << abs(3 - x) + abs(3 - y) << std::endl;
	return 0;
}