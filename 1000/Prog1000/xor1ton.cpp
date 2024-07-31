#include <iostream>

// Function to find XOR of numbers from 0 to n
int xorOfNumbers(int n) {
    // Find the remainder of n when divided by 4
    int mod = n % 4;

    // Depending on the remainder, return n, 1, n+1, or 0
    if (mod == 0)
        return n;
    else if (mod == 1)
        return 1;
    else if (mod == 2)
        return n + 1;
    else // mod == 3
        return 0;
}

int main() {
    int n;
    std::cout << "Enter a number (n): ";
    std::cin >> n;
    std::cout << "XOR of numbers from 0 to " << n << " is: " << xorOfNumbers(n) << std::endl;
    return 0;
}
