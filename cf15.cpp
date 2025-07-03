#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>

using namespace std;
 
int main()
{
    char n[10000];
    cin>>n;
    char a[10000];
    int l = 0;
    for (int i = 0; n[i] != '\0'; i++)
    {
        if(n[i]=='0')
        {
            l = i;
            break;
        }
    }
    for (int i = 0; i<l; i++)
    {
        cout<<n[i];
    }
    for(int i=l+1;n[i]!='\0';i++)
    cout<<n[i];
    return 0;
}