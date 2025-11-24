#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	string s; cin >> s;
	string result = "";
	int length = s.size() - 1;
	for (int i = 0; i <=length; i++) {
		if (s[i] == '-' && i + 1 <=length) {
			if (s[i + 1] == '.'){
				result += '1';
			}
			else if (s[i + 1] == '-') {
				result += '2';
			}
			i += 1;
		}
		else {
			result += '0';
		}
	}
	cout << result << endl;

	return 0;
}