#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    int n, x = 0;
    cin>>n;
    string a;
    while(n != 0){
    cin>>a;
    if (a[1] == '+')
    ++x;
    else
    --x;
    n--;
    }
    cout<<x<<endl;
    return 0;
}