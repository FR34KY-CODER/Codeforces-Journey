#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char a[n];
        cin>>a;
        int p=0,q=0,r=0,s=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i] == 'U')
            p++;
            if(a[i] == 'D')
            q++;
            if(a[i] == 'L')
            r++;
            if(a[i] == 'R')
            s++;
            if((p-q)==1 && (s-r)==1)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }    
    }
    cout<<"NO"<<endl;
    return 0;
}