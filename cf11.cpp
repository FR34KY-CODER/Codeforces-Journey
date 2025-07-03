#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    int t;
    int l;
    cin>>t>>l;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        cin>>a[i];
    }
    sort(a,a+t);
    int m = 0;
    m = max(a[0], l - a[t - 1])*2;
    for (int i = 0; i < t - 1; i++)
        m = max(m, a[i + 1] - a[i]);

    cout.precision(20);
    cout << fixed << m / 2.0 << endl;
    return 0;
}