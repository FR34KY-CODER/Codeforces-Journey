#include <iostream>
using namespace std;
int main() 
{
    int m,i=0,r,num,count=0,n=0;
    int a[4];
    cin>>num;
    int t=0;
    for(t=1;t<1000;t++)
    { 
    while(t!=0)
    {
        r=t%10;
        t=m;
        t=t/10;
        count++;
        if(r==4||r==7)
        n++;
        if(n==count)
        {
            a[i]=m;
            i++;
        }
    }
    }
    for(t=0;t<i+1;t++)
    {
    if(num%a[t]==0)
   { cout<<"YES";
    return 0;
   }
   else
   cout<<"NO";
    }
   return 0;
}