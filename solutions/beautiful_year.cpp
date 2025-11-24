#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;

bool distinct_digits(int num, int length) {
	unordered_set<int> s;
	while (num > 0) {
		int digit = num % 10;
		s.insert(digit);
		num /= 10;
	}
	return s.size() == length;
}

int main() {
	int year;
	cin >> year;
	for (int y = year + 1; y <= INT_MAX; ++y) {
		int length = to_string(y).size();
		if (distinct_digits(y, length)) {
			cout << y << endl;
			break;
		}
	}
	return 0;
}