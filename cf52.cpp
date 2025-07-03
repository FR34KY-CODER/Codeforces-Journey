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
    string a;
    string b;
    cin>>a>>b;
    string p;
    string q;
    int c = 0, j = 0;
    if(a.size() == b.size())
    {
        for (int i = 0; i < a.size(); i++)
        {
            if(a[i] != b[i])
            {
                p[c] = a[i];
                q[c] = b[i];
                c++;
            }       
        }
        if(c == 2 && p[0] == q[1] && p[1] == q[0])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    TataByeBye
}