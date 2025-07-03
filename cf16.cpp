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
        int n;
        cin>>n;
        int a[n];
        int c = 0, s = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {   
            if(a[i]==-1 && c<=2)
            c++;   
        }
        if(c == 2)
        {
            for (int i = 0; i < n; i++)
            {
                if()
                s = s + a[i]; 
            }
            cout<<s+4<<endl;
        }
        if(c == 1)
        {
            for (int i = 0; i < n; i++)
            {
                s = s + a[i];
            }
            cout<<s<<endl; 
        }
        if(c == 0)
        {
            for (int i = 0; i < n; i++)
            {
                s = s + a[i];
            }
            cout<<s-4<<endl;
        }
    }
    return 0;
}