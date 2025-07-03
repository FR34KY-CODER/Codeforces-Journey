#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    int n, c = 0, i, j, flag = 0;
    cin>>n;
    string s[n];

    for (i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    int l = s[0].length();
    for (i = 0; i < l;i++)
    {
        for (j = 0; j < n-1; j++)
        {
            if(s[j][i] == s[j+1][i])
            {
                continue;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            c++;
        }
        else
        {
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}   