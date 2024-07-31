#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int mex = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] != i) {
                mex = i;
                break;
            }
        }

        if (mex == -1) {
            cout << "-1" << endl;
        } else {
            vector<pair<int, int>> divisions;

            int last = -1;
            for (int i = 0; i < n; i++) {
                if (a[i] == mex) {
                    if (last != -1) {
                        divisions.push_back({last + 1, i + 1});
                    }
                    last = i;
                }
            }

            // divisions.back().second = n;

            cout << divisions.size() << endl;
            for (auto division : divisions) {
                cout << division.first << " " << division.second << endl;
            }
        }
    }

    return 0;
}
