#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
        int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if(a[i] == 'M' || a[i] == 'm')
            {
                c1++;
            }
            else
            {
                break;
            }
        }     
        for (int i = 0; i < a.size(); i++)
        {
            if(i == c1 &&  a[i] == 'E'|| a[i] == 'e' )
            {
                c2++;
            }
            else
            {
                break;
            }
        }
        for (int i = 0; i < a.size(); i++)
        {
            if(i == c2 + c1 && a[i] == 'E'|| a[i] == 'e')
            {
                c2++;
            }
            else
            {
                break;
            }
        }
        for (int i = 0; i < a.size(); i++)
        {
            if(i == c3 + c2 + c1 && a[i] == 'W'|| a[i] == 'w')
            {
                c4++;
            }
            else
            {
                break;
            }
        }
        if(c1 + c2 + c3 + c4 == a.size())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}   