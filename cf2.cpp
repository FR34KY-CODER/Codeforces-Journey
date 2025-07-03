#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int e=0;
    int o=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2==1)
        o++;
        else
        e++;
    }
    if(e>o)
    {
        for (int i = 0; i < n; i++)
        {
            if(a[i]%2==1)
            {
                cout<<i+1<<endl;
            }
        }
        
    }
     if(o>e)
    {
        for (int i = 0; i < n; i++)
        {
            if(a[i]%2==0)
            {
                cout<<i+1<<endl;
            }
        }
        
    }
    return 0;
}