#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, m = 0, c = 0;
        cin>>n;
        long long int a[n];
        for (long long int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (long long int i = 0; i < n-1; i++)
        for (long long int j = i+1; j < n; j++)
        {
            abs(a[i] - a[j]);
            m = max(m, a[i] - a[j]);
        }
        for (long long int i = 0; i < n-1; i++)
        for (long long int j = i+1; j < n; j++)
        {
            if(abs(a[i] - a[j]) == m)
            {
                c++;
            }
        }
        cout<<2*c<<endl;
    }
    return 0;
}