#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Input: A vector of n numbers and an integer k
    vector<int> numbers = {5, 2, 9, 1, 8, 3};
    int k = 3; // The number of largest elements to pick

    // Iterate to pick the largest k elements
    vector<int> largestNumbers;
    for (int i = 0; i < k; ++i) {
        // Find the largest element
        auto maxIt = max_element(numbers.begin(), numbers.end());

        // Add the largest number to the result list
        largestNumbers.push_back(*maxIt);

        // Delete the largest number from the list
        numbers.erase(maxIt);
    }

    // Output the largest k numbers
    cout << "The " << k << " largest numbers are: ";
    for (int num : largestNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

