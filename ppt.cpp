#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solve(int n, int k, vector<string>& members) {
    int ans = 1;
    vector<bool> can_stay(n, true);
    for (int i = 1; i < n; i++) {
        vector<bool> tmp_can_stay(can_stay);
        vector<int> agree(k, 0), disagree(k, 0);
        int remaining = n - i + 1;
        for (int j = i; j < n; j++) {
            for (int l = 0; l < k; l++) {
                if (members[j][l] == '+') {
                    agree[l]++;
                } else {
                    disagree[l]++;
                }
            }
        }
        for (int l = 0; l < k; l++) {
            if (members[0][l] == '+') {
                agree[l]++;
            } else {
                disagree[l]++;
            }
            remaining--;
            if (agree[l] < disagree[l]) {
                for (int j = i; j < n; j++) {
                    if (can_stay[j] && members[j][l] == '+') {
                        tmp_can_stay[j] = false;
                        remaining--;
                    }
                }
            } else if (agree[l] > disagree[l]) {
                for (int j = i; j < n; j++) {
                    if (can_stay[j] && members[j][l] == '-') {
                        tmp_can_stay[j] = false;
                        remaining--;
                    }
                }
            } else {
                for (int j = i; j < n; j++) {
                    if (can_stay[j]) {
                        tmp_can_stay[j] = false;
                        remaining--;
                    }
                }
            }
            if (remaining == 1) {
                break;
            }
        }
        can_stay = tmp_can_stay;
        int cnt = 0;
        for (int j = i; j < n; j++) {
            if (can_stay[j]) {
                cnt++;
            }
        }
        ans = max(ans, cnt + 1);
        if (remaining == 1) {
            break;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<string> members(n);
        for (int i = 0; i < n; i++) {
            cin >> members[i];
        }
        cout << solve(n, k, members) << endl;
    }
    return 0;
}
