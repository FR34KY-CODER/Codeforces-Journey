#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    long long int n;
    cin>>n; 
    long long int p1,p2,p3,t1,t2,l[n],r[n],time = 0,afk = 0;
    cin>>p1>>p2>>p3>>t1>>t2;
    long long int q = t1+ t2;
    long long int work_end = 0;
    for(long long int i = 0; i < n; i++)
    {
        cin>>l[i]>>r[i];
        if(i == 0)
        {
            time = (r[0] - l[0])*p1;
            work_end = r[0];
        }
        else
        {
            time = time + (r[i] - l[i])*p1;
            afk = l[i] - work_end;
            if(t1 >= afk)
            {
                time = time + (afk*p1);
            }
            if(afk > t1 && afk <= q)
            {
                time = time + (p1*t1) + ((afk-t1)*p2);
            }
            if(afk > q)
            {
                time = time + (p1*t1) + (p2*t2) + ((afk-q)*p3);
            }
            work_end = r[i];
        }
    }
    cout<<time<<endl;
    return 0;
}