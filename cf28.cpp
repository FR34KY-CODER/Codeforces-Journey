#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++) 
        { 
            if(a[i]>a[j])
            {
                int t1 = a[i];
                a[i] = a[j];
                a[j] = t1;
                int t2 = b[i];
                b[i] = b[j];
                b[j] = t2;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
        if((a[i]<a[j+1]) && (b[i]>b[j+1]))
        {
            c++;
        }
    }
    if(c == n-1)
    {
        cout<<"Happy Alex"<<endl;
    }
    else
        cout<<"Poor Alex"<<endl;
    return 0;
}