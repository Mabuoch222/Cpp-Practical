#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

// Function to remove duplicates from an array
vector<int> removeDuplicates(const vector<int> & arr) {
    unordered_set<int> uniqueElements;
    vector<int> result;
  

    for (int num : arr) {
        if (uniqueElements.find(num) == uniqueElements.end()) {
            // If element not found in set, add it to the result vector
            result.push_back(num);
            // Add element to the set to mark it as seen
            uniqueElements.insert(num);
        }
    }

    return result;
}

int main() {
    // Example array with duplicates
    vector<int> arr = {1, 2, 3, 2, 4, 5, 3, 6, 6, 7};

    // Removing duplicates
    vector<int> result = removeDuplicates(arr);

    // Printing the array without duplicates
    cout << "Array without duplicates: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    cout << endl;

    return 0;
}
