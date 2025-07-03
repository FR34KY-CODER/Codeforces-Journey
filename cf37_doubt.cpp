#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    long long int n, c = 0, k = 0, s = 0;
    cin>>n;
    long long int a[n];
    long long int b[n];
    long long int d[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        b[i] = a[i];   
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if(b[i] != a[i])
        {
            c++;
            d[k] = a[i];
            k++;
        }
    }
    for(int i = 0;i < n; i++)
    {
        if(b[i] == a[i])
        {    
            s++;
        }
    }
    if(s == n)
    {
        cout<<"yes"<<endl<<"1 1";
        return 0;
    }
    if(c != 2)
    {
        cout<<"no"<<endl;
        return 0;
    }
    else
    {
        cout<<"yes"<<endl;
        for (int i = 0; i < 2; i++)
        {
            cout<<d[i]<<" ";
        }
    }
    return 0;
}