#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    int x, m, n;
    cin>>n>>m;
    if (m > n)
        x = -1;
    else
    {
        if (n % 2 == 0)
            x = n / 2;
        else
            x = (n / 2) + 1;
        while (x%m != 0)
        {
            x++;
        }
    }
    cout << x;
    return 0;
}