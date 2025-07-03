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
    if(m>n)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(n%2 == 0)
    {   
        c = n/2;
    }
    else
    {   
        c = n/2 + 1;
    }
    for(long long int i = 0; c%m != 0;i++)
    {
        c++;
    }
    cout<<c;
    return 0;
}