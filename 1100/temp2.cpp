#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

// Function to find the size of the largest subarray with an even sum
int largest_even_sum_subarray_size(const vector<int>& arr) {
    // Calculate the total sum of the array
    int total_sum = accumulate(arr.begin(), arr.end(), 0);

    // If the total sum is even, return the size of the entire array
    if (total_sum % 2 == 0) {
        return arr.size();
    } else {
        // Find the first odd element index
        int first_odd_index = -1;
        for (size_t i = 0; i < arr.size(); ++i) {
            if (arr[i] % 2 != 0) {
                first_odd_index = i;
                break;
            }
        }

        // Find the last odd element index
        int last_odd_index = -1;
        for (int i = arr.size() - 1; i >= 0; --i) {
            if (arr[i] % 2 != 0) {
                last_odd_index = i;
                break;
            }
        }

        // Calculate the possible lengths by removing either the first or last odd element
        int length_excluding_first_odd = arr.size() - first_odd_index - 1;
        int length_excluding_last_odd = last_odd_index;

        // Return the maximum of the two possible lengths
        return max(length_excluding_first_odd, length_excluding_last_odd);
    }
}

int main() {
    // int T;
    // cin >> T;
    // vector<int> results;

    // // Process each test case
    // for (int t = 0; t < T; ++t) {
    //     int N;
    //     cin >> N;
    //     vector<int> A(N);
    //     for (int i = 0; i < N; ++i) {
    //         cin >> A[i];
    //     }
    //     int result = largest_even_sum_subarray_size(A);
    //     results.push_back(result);
    // }

    // // Print all results
    // for (const int& res : results) {
    //     cout << res << endl;
    // }
    vector<int>arr={1,3};
    if(is_sorted(begin(arr),end(arr))){
        cout<<"isfh";
    }
    else {
        cout<<"NO";
    }

    return 0;
}
