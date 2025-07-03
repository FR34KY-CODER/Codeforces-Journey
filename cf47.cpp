#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int l, r, x, a, b;
        cin>>l>>r>>x;
        cin>>a>>b;
        if(a == b)
        {
            cout<<"0"<<endl;
            continue;
        }
        if(abs(a-b) >= x)
        {
            cout<<"1"<<endl;
            continue;
        }
        if((a<b && (r-b >= x || a-l >= x)) || (a>b && (r-a >= x || b-l >= x)))
        {
            cout<<"2"<<endl;
            continue;
        }
        if(a+x > r && a-x < l)
        {
            cout<<"-1"<<endl;
            continue;
        }
        if(r-b >= x || b-l >= x)
        {
            cout<<"3"<<endl;
            continue;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}