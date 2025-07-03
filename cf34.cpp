#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    int n, s, p = 0;
    cin>>s>>n;
    int d[n][2], temp1, temp2;
    for (int i = 0; i < n; i++)
    cin>>d[i][0]>>d[i][1];
    //sorting of double array
    for (int i = 0; i < n-1; i++)
    for (int j = 0; j < n-i-1; j++)
    {
        if(d[j][0] > d[j+1][0])    
        {
            temp1 = d[j][0];
            temp2 = d[j][1];
            d[j][0] = d[j+1][0];
            d[j][1] = d[j+1][1];
            d[j+1][0] = temp1;
            d[j+1][1] = temp2;
        }
        else
        {
            continue;
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(s>d[i][0])
        {
            s = s + d[i][1];
            p++;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(p == n)
    {
        cout<<"YES"<<endl;
    }
    return 0;
}