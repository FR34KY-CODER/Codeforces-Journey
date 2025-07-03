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
        long long int n;
        cin>>n;
        if (n%2 != 0)
        {
            cout<<"1 "<<n/2<<" "<<n/2;
        }
        else if(n%4==0)
        {
            cout<<n/2<<" "<<n/4<<" "<<n/4;
        }
        else
        {
            cout<<"2 "<<(n/2)-1<<" "<<(n/2)-1;
        }
        cout<<endl;
    }
    return 0;
}