#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    long long n,m;
    cin>>n>>m;
    long long c = 0;
    long long q = m/n;
    if(m == n)
    {
        cout<<"0"<<endl;
        return 0;
    }
    else if(m%n != 0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    else
    {
        while(q%2 == 0){
            q =q/2;
            c++;
        }
        while(q%3 == 0){
            q =q/3;
            c++;
        }
        if(q != 1)
        c = -1;
        cout<<c<<endl;
    }    
    return 0;
}