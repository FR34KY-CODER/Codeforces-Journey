#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
using namespace std;

struct com
{
    int x,y;
}a[100000];
bool cmp(com l,com m)
{
    if(l.x==m.x) 
    return l.y>m.y;
    else
    return l.x<m.x;
}

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>a[i].x>>a[i].y;
        }
        sort(a,a+n,cmp);
        int flag=0;
        for(int i=1;i<n;i++)
        {
            if((a[i].x>a[i-1].x)&&(a[i].y<a[i-1].y))
            {
                flag=1;
            }
            if(flag) 
            break;
        }
        if(flag) cout<<"Happy Alex"<<endl;
        else cout<<"Poor Alex"<<endl;
    }
    return 0;
}