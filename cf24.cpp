#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n, s, t;
        cin>>n>>s>>t;
        long long int p = abs(t-s);
        long long int q = max(s-p,t-p);
        long long int r = n-q+1;
        cout<<r<<endl;
    }
    return 0;
}