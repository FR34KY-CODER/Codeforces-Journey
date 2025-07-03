#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m][2];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>a[i][j];
        }
    }
    int ma = 0;
    for (int i = 0; i < m; i++)
    {
         ma = max(ma,a[i][0]);
    }
    int mn = a[0][1];
    for (int i = 0; i < m; i++)
    {
        if(mn > a[i][1])
        mn = a[i][1];
    }
    cout<<ma<<" "<<mn<<endl;
    return 0;
}