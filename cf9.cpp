#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<string>
using namespace std;
 
int main()
{
    string a;
    cin>>a;
    int l = a.length();
    int c=0,d=0;
    for (int i = 0; i < l; i++)
    {
        //since ASCII for 'A' and 'Z' is already in increasing order so we dont need to convert them to integer to compare
        if (a[i] >= 'A' && a[i] <= 'Z')
            {
                c++;
            }    
            else if (a[i] >= 'a' && a[i] <= 'z')
            {
                d++;
            }
    }
    //making first element right to CAPS
    if ((d == 1 && c != 0) || l==1)
        {
            if (a[0] >= 'a' && a[0] <= 'z')
                a[0] = a[0] - 32;
            else if (a[0] >= 'A' && a[0] <= 'Z')
                a[0]= a[0] + 32;
            for (int i=1; i<l; i++)
            {   
                if (a[i] >= 'A' && a[i] <= 'Z')
                a[i] = a[i] + 32;
            }
            cout<<a<<endl;
        }
        else
            cout<<a<<endl;
    return 0;
}
