#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(2 * n);
    for (int i = 0; i < 2 * n; ++i) {
        cin >> a[i];
    }

    // Compute XOR sum of all elements in a
    int xor_sum = 0;
    for (int num : a) {
        xor_sum ^= num;
    }

    // Frequency arrays for the first and second halves of a
    unordered_map<int, int> freq_first_half, freq_second_half;
    for (int i = 0; i < 2 * n; ++i) {
        if (i < n) {
            freq_first_half[a[i]]++;
        } else {
            freq_second_half[a[i]]++;
        }
    }

    // Construct l and r
    vector<int> l, r;
    for (int i = 0; i < 2 * n && l.size() < 2 * k; ++i) {
        int num = a[i];
        int xor_with_num = xor_sum ^ num;

        if (i < n) { // First half
            if (freq_first_half[num] > 0 && freq_second_half[xor_with_num] > 0) {
                l.push_back(num);
                r.push_back(xor_with_num);
                freq_first_half[num]--;
                freq_second_half[xor_with_num]--;
            }
        } else { // Second half
            if (freq_second_half[num] > 0 && freq_first_half[xor_with_num] > 0) {
                l.push_back(xor_with_num);
                r.push_back(num);
                freq_second_half[num]--;
                freq_first_half[xor_with_num]--;
            }
        }
    }

    // Output l and r
    for (int num : l) {
        cout << num << " ";
    }
    cout << endl;
    for (int num : r) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
