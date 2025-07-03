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
    lli n, sum = 0, c = 0, d = 0;
    cin>>n;
    int a[n];
    for (lli i = 0; i < n; i++)
    {
        cin>>a[i];
        sum = sum + a[i];
        if(a[i] == 200)
        {
            c++;
        }
        if(a[i] == 100)
        {
            d++;
        }
    }
     if(n != 1)
    {

        if(sum%200 == 0)
        {
            if(d == 0 && (c/2)%2 == 0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO";
    }
    TataByeBye
}