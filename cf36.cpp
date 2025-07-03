#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    int n, k, score, c = 0;
    int t = 0;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        score = a[k-1];
        if(a[i] == 0)
        {
            t++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i] >= score && a[i] != 0)
        {
            c++;
        }   
    }
    if(t == n)
    {
        c = 0;
    }cf37
    cout<<c<<endl;
    return 0;
}