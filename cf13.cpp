
#include<bits/stdc++.h>
#include <iostream>
#include <algorithm> 
#include <cstring>
#include <cstdlib>

using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        if(n==0 || d==0)
        {
            cout<<"0\n";
        }
        else
        {
            int p,q;
            p=n;
            q=d;
            int mini=min(p,q);
            int maxi=max(p,q);
            if(mini*2<=maxi)
            {
                cout<<mini<<"\n";
            }
            else
            {
                cout<<((n+d)/3)<<"\n";
            }

        }
    }
   
}