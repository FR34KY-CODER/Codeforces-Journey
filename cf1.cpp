#include<iostream>
using namespace std;
int main()
{
    int n,p=0,q=0,r=0,s=0,ans=0;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
    {
        p++;
    }
        if(a[i]==2)
    {
        q++;
    }
        if(a[i]==3)
    {
        r++;
    }
        if(a[i]==4)
    {
        s++;
    }
    }
    if(q%2 == 0)
    {
        ans = ans + q/2;
        q = 0;
    }
    else
    {
        ans = ans + q/2;
        q = 2;
    }
    if(p >= r)
    {
        ans = ans + r;
        p = p - r;
        r = 0;
    }
    else
    {
        ans = ans + p;
        r = r - p;
        p = 0;
    }
    if((p + q)%4 == 0)
    {
        ans = ans + (p + q)/4;
    }
    else
    {
        ans = ans + ((p + q)/4)+1;
    }
    if(r != 0)
    {
        ans = ans + r;
        r = 0;
    }
    int taxis = ans + s;
    cout<<taxis<<endl;
    return 0;
}
