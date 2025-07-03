#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &A, vector<int> &B) {
    int n = A.size();
    
    vector<pair<int,int>> people(n);
    for(int i = 0;i< n ; ++i){
    people[i] = { A[i],B[i]};
    
    sort(people.begin(),people.end(),
            [](auto &p1,auto &p2){
                return p1.first > p2.first;
            });
    
    vector<int> result(n);
    int sz = 0;
    for(auto &p : people){
        int h = p.first;
        int k = p.second;
        
        for(int j =sz;j> k;--j){
            result[j] = result[j-1];
        }
        result[k] = h;
        ++sz;
    }
    return result;
}
}

//If you need a standalone main() for testing, you can use:

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a , b;
    solve(a,b);
    return 0;
}