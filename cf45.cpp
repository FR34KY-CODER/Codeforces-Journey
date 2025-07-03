#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    string s, t;
    cin>>s;
    cin>>t;
    long long int l1, l2, c = 0;
    l1 = s.length();
    l2 = t.length();
    if(l1 == l2){
    for (int i = 0; i < l1 ; i++)
    {
        if(s[i] == t[l1-1-i])
        {
            c++;
        }
    }
    if(c == l1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
    else
    cout<<"NO"<<endl;
    return 0;
}