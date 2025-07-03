#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    string a;
    cin>>a;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == 'H' || a[i] == 'Q' || a[i] == '9')
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(a[i] == '+')
        {
            continue;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}