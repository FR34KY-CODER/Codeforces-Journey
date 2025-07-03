#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <cmath>

#define lli long long int
#define JaiShreeRam int main()
#define TataByeBye return 0;
using namespace std;
 
int get(const vector<int> &a, const vector<int> &b)
{
	int res = 0;
	while (res < int(a.size()) && a[res] == b[res])
		++res;
	return res;
}

JaiShreeRam
{
	int t;
	cin>>t;
	while (t--)
    {
		int n, m;
		cin>>n>>m;
		vector<vector<int>> a(n, vector<int>(m));
		for(int i = 0; i < int(n); i++)
        for(int j = 0; j < int(m); j++) 
        {
			cin>>a[i][j];
			--a[i][j];
		}
		vector<vector<int>> b(n, vector<int>(m));
		for(int i = 0; i < int(n); i++) 
        for(int j = 0; j < int(m); j++) 
        b[i][a[i][j]] = j;
		
        sort(b.begin(), b.end());
		
        for(int i = 0; i < int(n); i++)
         {
			int j = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
			int ans = 0;
			if (j > 0) ans = max(ans, get(a[i], b[j - 1]));
			if (j < n) ans = max(ans, get(a[i], b[j]));
			cout<<ans<<" ";
		}
		cout<<endl;
    }
    TataByeBye
}