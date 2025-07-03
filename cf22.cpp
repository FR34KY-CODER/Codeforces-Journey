#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
 
int main()
{
    long long n, m;
    cin>>n>>m;
    int a[m];
    long long p = 1, time = 0;
    for (long long i = 0; i < m; i++)
    {
        cin>>a[i];
    }
    for (long long i = 0; i < m; i++)
    {
        
        long long q = n + a[i] - p;
        time = time + q%n;
        p = a[i];    
    }
    cout<<time<<endl;
    return 0;
}