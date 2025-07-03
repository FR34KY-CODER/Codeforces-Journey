#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    int c = 0, k = 0, m;
    string s;
    cin>>s;
    char d[] = "heidi";
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == d[k])
        {
            c++;
            k++;
        }
    }
    if(c == 5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}