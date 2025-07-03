#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    long long int n, m, c = 0;
    cin>>n>>m;
    if(m > n)
    while(m > n)
    {
        if(m%2==0)
        {
            m = m/2;
            c++;
        }
        else
        {
            m = m + 1;
            c++;
        }
    }
    else
    {
        c = n - m;
        cout<<c<<endl;
        return 0;
    }
    cout<<c + n - m<<endl;
    return 0;
}