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
        long long int n, k, c = 0, rem = 0;
        cin>>n>>k;
        while(n != 0)
        {
            if(n%k == 0)
            {
                n = n/k;
                c++;
            }
            else
            {
                rem = n%k;
                c = c + rem;
                n = n - rem;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}