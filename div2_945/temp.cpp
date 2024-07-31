#include <iostream>
#include <vector>
#include <unordered_map>

int countDistinctPairs(const std::vector<int>& nums) {
    int n = nums.size();
    if (n < 2) return 0; // No pairs if less than 2 elements

    // Step 1: Count the frequency of each element
    std::unordered_map<int, int> frequency;
    for (int num : nums) {
        frequency[num]++;
    }

    // Step 2: Calculate total pairs
    long long totalPairs = static_cast<long long>(n) * (n - 1) / 2;

    // Step 3: Subtract pairs where elements are the same
    for (const auto& entry : frequency) {
        int count = entry.second;
        if (count > 1) {
            totalPairs -= static_cast<long long>(count) * (count - 1) / 2;
        }
    }

    return totalPairs;
}

int main() {
    std::vector<int> nums = {5,2,4};
    std::cout << "Number of distinct pairs: " << countDistinctPairs(nums) << std::endl;
    return 0;
}
