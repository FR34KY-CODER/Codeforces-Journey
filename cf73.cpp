#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Returns the k-th number in the live sequence
long long live_sequence(int k) {
    vector<int> digits;  // stores the digits of the number
    while (k > 0)
    {
        int digit = k % 10;
        digits.push_back(digit);
        k /= 10;
    }

    reverse(digits.begin(), digits.end());  // reverse the order of digits
    long long number = 0;
    for (int digit : digits) {
        number = 10 * number + digit;  // build the number from digits
    }
    return number;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long k;
        cin >> k;
        cout << live_sequence(k) << endl;
    }
    return 0;
}