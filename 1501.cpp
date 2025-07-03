#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,k=1,l=1,m=0;
    cin>>n;
    int a[n],b[n],c[n]={1};

    //a[n] all numbers in sorted
    //b[n] all different numbers
    //c[n] sum of all diff numbers
    //k=kitne number diff hai 
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    b[0]=a[0];
    for(i=0;i<n-1;i++)
    {
       if(a[i]!=a[i+1])
       {
           b[k]=a[i+1];
           k++;
       }
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            l++;
            c[m]=l;
        }
        else
        {

            l=1;
            m++;
            c[m]=l;
        }
    }
    for(i=0;i<=m;i++)
    {
        c[i]=c[i]*b[i];
    }
    
    
    int d[k]={0},e[k];
    //d[k] hataane ke baad ka sum
    //e[k] diff of c[n]-b[n]
    for(i=0;i<k;i++)
    {
        if(b[i+1]==b[i]+1)
        {
            d[i]=c[i+1];
    
        }
        if(b[i-1]==b[i]-1)
        d[i]=d[i]+c[i-1];
    }
    for(i=0;i<k;i++)
    {
        e[i]=c[i]-d[i];
    }
    
    

    return 0;
}