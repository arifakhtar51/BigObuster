#include <iostream>
#include <string>
#include <vector>

using namespace std;

int shortest_concatenated_string(const string& s) {
    int n = s.length();
    vector<int> divisors;
    
    // Find all divisors of n
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    
    // Iterate through divisors to find shortest concatenated string length
    int shortest_length = n;
    for (int length : divisors) {
        bool valid = true;
        for (int i = 0; i < n; ++i) {
            if (s[i] != s[i % length]) {
                if (i % length == 0) {
                    valid = false;
                    break;
                }
                valid &= (i % length == 0);
            }
        }
        if (valid) {
            shortest_length = min(shortest_length, length);
        }
    }
    return shortest_length;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << shortest_concatenated_string(s) << endl;
    }
    return 0;
}
