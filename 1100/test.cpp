#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 1e6 + 1;
vector<int> preComputed(MAXN, 0);

// Function to precompute the number of divisors for each element in arr
void precomputeDivisors(const vector<int>& arr) {
    for (int num : arr) {
        for (int j = num; j < MAXN; j += num) {
            preComputed[j]++;
        }
    }
}

int main() {
    // Example array
    vector<int> arr = { 6, 12};

    // Precompute the number of divisors for elements in arr
    precomputeDivisors(arr);

    // Example usage
    int num;
    cout << "Enter a number to find its number of divisors (<= 1e6): ";
    cin >> num;
    
    if (num >= 1 && num < MAXN) {
        cout << "Number of divisors of " << num << " is: " << preComputed[num] << endl;
    } else {
        cout << "Number is out of range." << endl;
    }

    return 0;
}
