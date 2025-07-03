#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long n,k=1, m = 0;
    cin>>n;
    long long a[n];
    long long b[100000];
    long long c[100000];
    long long d[100000];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        b[a[i]] = b[a[i]]+a[i]; ;
    }
    sort(a,a+n);
    c[0]=a[0];
    for(int i=0;i<n-1;i++)
    {
       if(a[i]!=a[i+1])

       {
           c[k]=a[i];
           k++;
       }
    }
    for (int i = 1; i < k; i++)
    {
        if(a[i+1]==a[i]+1)
       {
           d[i]=b[i+1];
       }
        if(a[i-1]==a[i]-1)
       {
           d[i]=d[i]+b[i]-1;
       }      
    }
    
    for (int i = 1; i < k; i++)
    {
        cout<<d[i];
    }   
    return 0;
    
}
