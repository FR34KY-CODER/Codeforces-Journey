#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <cmath>

#define lli long long int
#define JaiShreeRam int main()
#define TataByeBye return 0;
using namespace std;
 
JaiShreeRam
{
    lli n;
    lli p = 0;
    cin>>n;
    lli a[n], b[n], d[1000000], c = 1, q = 1;
    for (lli i = 0; i < n; i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    sort(a,a+n);
    for (lli i = 0; i < n-1; i++)
    {
        if (q < c)
        {
            q = c;
        }    
        if(a[i] == a[i+1])
        {
            c++;
        }
        else
        {
            d[a[i]] = c;
            c = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {   
        if (d[a[i]] != q)
        d[a[i]]=-1;
    }
    for (int i = 0; i < n; i++)
    {   
        d[b[i]]--;
        if (d[b[i]]==0)
        {
            printf("%i", b[i]);
            break;
        }
    }
    TataByeBye
}