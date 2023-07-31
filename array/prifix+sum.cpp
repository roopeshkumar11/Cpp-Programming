#include <iostream>
#include <vector>

std::vector<int> prefixSum(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> prefix(n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        prefix[i] = sum;
    }

    return prefix;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    std::vector<int> prefix = prefixSum(arr);

    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }

    std::cout << "\nPrefix sum array: ";
    for (int num : prefix) {
        std::cout << num << " ";
    }

    return 0;
}
