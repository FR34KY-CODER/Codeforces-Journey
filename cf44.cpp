#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    long long int n, a, x ,b, y, flag = 0;
        cin>>n>>a>>x>>b>>y;
    while(a != x && b != y)
    {
        a = a+1;
        b = b-1;
        if(a>n)
        a=1;
        if(b<1)
        b=n;
        if(a == b)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}