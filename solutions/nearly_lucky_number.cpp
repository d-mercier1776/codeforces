#include<iostream>
#include<unordered_set>
using namespace std;


bool nearly_lucky(int num) {
	int count = 0;
	while (num > 0) {
		int digit = num % 10;
		if (digit == 4 || digit == 7) {
			count++;
		}
		num /= 10;
	}
	// check if count contains only 4 or 7 
	while (count > 0) {
		int digit = count % 10;
		if (digit != 4 && digit != 7) {
			return false;
		}
		count /10;
	}
	return true;
}


int main() {
	long long number; cin >> number;
	if (nearly_lucky(number)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	return 0;
}