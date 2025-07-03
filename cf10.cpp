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
    int a[t][3];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>a[i][j];   
        }
    }
    int sum = 0, Flag=0;
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < t; i++)
        {
            sum = sum + a[i][j];                
        }
        if(sum == 0)
        {
            Flag = 1;
            sum = 0;
        }
        else
        {
            Flag = 0;
            sum = 0;
            break;
        }
    }
    if(Flag == 1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}