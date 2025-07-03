#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(m*a>b)
    {
       int p = (n%m)*a;
        if(p>b)
        {
           cout<<n/m*b + b;
        }
        else
        {
           cout<<n/m *b +p;
        }
    }
    else
    {
        cout<<n*a;
    }
}