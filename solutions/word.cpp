#include<iostream>
#include<string>
using namespace std;
int main() {
	string word;
	cin >> word;
	int count = 0;
	for (int i = 0; i < word.size(); ++i) {
		if (word[i] >= 'a' && word[i] <= 'z') {
			count++;
		}
	}
	bool cap = true;
	if (count == word.size() - count || count > word.size() - count) {
		cap = false;
	}
	string result = "";
		if (cap) {
			for (char& c : word) {
				result += toupper(c);
			}
		}
		else {
			for (char& c : word) {
				result += tolower(c);
			}
		}
	cout << result << endl;

	return 0;
}