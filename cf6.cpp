#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
		cin >> n >> k;
		int s = (k - 1) / (n - 1);
		cout << k + s << endl;
    }
    return 0;
}