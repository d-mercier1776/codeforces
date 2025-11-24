#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<char> vi(n);

    for (int i = 0; i < n; ++i) {
        cin >> vi[i];
    }
    // walk over the solutions:
    // BGGBG 
    // t = 1
    // GB G GB 
    // OUTPUT: GBGGB
    // BGGBG 
    // t = 2
    // GB G GB 
    // G GB GB
    for (int i = 0; i < t; ++i) {
        // we look at the adj
        for (int j = 1; j < n;++j) {
            if (vi[j] == 'G' && vi[j - 1] == 'B') {
                swap(vi[j], vi[j - 1]);
                j += 1;
            }
        }
    }

    for (auto item : vi) {
        cout << item;
    }
    cout << endl;

    return 0;
}
