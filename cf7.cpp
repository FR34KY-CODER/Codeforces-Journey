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
        for (int i = 0; i < t; i++)
        {
            char a[10000];
            gets(a);
            int l = strlen(a);
            for (int j = 0; a[j]!='\0'; j++)
            {
                if(a[j]!=0)
                cout<<(a[j]-48)*pow(10, l-j);
            } 
        }
    }
    return 0;
}   