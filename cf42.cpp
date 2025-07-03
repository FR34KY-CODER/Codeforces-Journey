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
        long long int n, m = 100000, M = 0, c = 0, C = 0, sum  = 0;
        cin>>n;
        long long int a[n];
        for (long long int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(m > a[i])
            m = a[i];
            M = max(M, a[i]);
        }
        for (long long int i = 0; i < n; i++)
        {
            if(a[i] == m)
            c++;
            if(a[i] == M)
            C++;
        }
        if(c == n || C == n)
        {
            cout<<(n-1)*n<<endl;
            continue;
        }
        cout<<2*c*C<<endl;
    }
    return 0;
}