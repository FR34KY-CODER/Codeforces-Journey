#include <iostream>
#include <vector>
using namespace std;

int countUnplacedFruits(const vector<int>& fruits, const vector<int>& baskets) {
    int n = fruits.size();
    vector<bool> used(n, false); // To mark which baskets are already occupied
    int unplaced = 0;
    
    // Iterate through each fruit in order
    for (int i = 0; i < n; i++) {
        bool placed = false;
        // Check baskets from left to right for the first available one that fits
        for (int j = 0; j < n; j++) {
            if (!used[j] && baskets[j] >= fruits[i]) {
                used[j] = true;  // Mark basket j as used
                placed = true;
                break;         // Move to the next fruit
            }
        }
        if (!placed)
            unplaced++;  // No basket was found for this fruit
    }
    
    return unplaced;
}

int main() {
    // Example 1:
    vector<int> fruits1 = {4, 2, 5};
    vector<int> baskets1 = {3, 5, 4};
    cout << "Example 1 Output: " << countUnplacedFruits(fruits1, baskets1) << endl;
    
    // Example 2:
    vector<int> fruits2 = {3, 6, 1};
    vector<int> baskets2 = {6, 4, 7};
    cout << "Example 2 Output: " << countUnplacedFruits(fruits2, baskets2) << endl;
    
    return 0;
}
