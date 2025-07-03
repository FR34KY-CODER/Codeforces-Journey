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
#define gcd(m, n) __gcd(m, n)
using namespace std;

lli gcd_of_arr(vector<lli>& arr, int idx)
{
    if (idx == arr.size() - 1) {
        return arr[idx];
    }
    lli a = arr[idx];
    lli b = gcd_of_arr(arr, idx + 1);
    return gcd(a, b);
}

JaiShreeRam
{
    int t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        vector<lli> a(n);
        lli m;
        for (lli i = 0; i < n; i++)
        {   
            cin>>a[i];
            m = gcd_of_arr(a, 0);
            
        }
        sort(a.begin(), a.end());
        cout<<a[n-1]/m<<endl;
    }
    TataByeBye
}