#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    
    int n,x;
    cin>>n;
    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    x=n/2;
    cout<<a[x];
    return 0;
}