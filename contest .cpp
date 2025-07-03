#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[10000];
    while(t != 0)
    {
        int n;
        cin>>n;
        int sum = 0, ans;
        for (int i = 0; i < n; i++)
        {
            int x,y;
            cin>>x>>y;
            if(x < 0)
            x = -x;
            if(y < 0)
            y = -y;
            ans = 2 * x + 2 * y;
            sum = sum + ans;
        }
        a[t]=sum;
        t--;
    }
    for(int j = 0; j < t; j++)
    cout<<a[j]<<endl;
    return 0;
}