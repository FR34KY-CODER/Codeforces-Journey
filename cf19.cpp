#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<string.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char a[n];
        cin>>a;
        int l = strlen(a);
        int c = 0;
        for (int i = 0; i < n/2; i++)
        {
            if((a[i]=='0' && a[n-1-i]=='1') || (a[i]=='1' && a[n-1-i]=='0'))
            {
                c++;
            }
            else
            {
                break;
            }
        }
        cout<<l-(2*c)<<endl;
        
    }
    return 0;
}