#include <iostream>
#include <algorithm>

int main() {
    // Declare an array
    int arr[] = {1, 2, 3,4};

    // Find permutations and print them
    do {
        for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    } while (std::next_permutation(arr, arr + sizeof(arr) / sizeof(arr[0])));

    return 0;
}
