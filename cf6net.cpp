#include <bits/stdc++.h>
using namespace std;
int kth(long long n, long long k)
{
    long long a = 0;
    long long c = 0;
    while (a != k) 
    {
        c++;
        if (c % n != 0)
            a++;
    }
    return c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long n,k;
    cin>>n>>k;
    cout << kth(n, k);
    }
    return 0;
}