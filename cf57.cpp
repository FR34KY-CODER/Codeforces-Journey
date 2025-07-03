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
    lli sum = 0, c = 0, r;
    string n;
    cin>>n;
    lli i = 0;
    if(n.size() == 1)
    {
        cout<<"0"<<endl;
        return 0;
    }
    while(n[i] != '\0')
    {
        sum = sum + (lli)n[i] - 48;
        r = sum;
        i++;
    }
    while(r/10 != 0)
    {
        sum = 0;
        while(r != 0)
        {
            sum = sum + r % 10;
            r = r/10;
        }
        r = sum;
        c++;
    }
    cout<<c+1<<endl;
    TataByeBye
}