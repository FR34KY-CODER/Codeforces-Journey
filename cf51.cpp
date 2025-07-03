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
    int t,n,k,i,j,a[500];
    string s;
	cin>>t;
	while(t--){
		cin>>n>>k>>s;
        //malloc
		memset(a,0,sizeof a);
		for(i = 0;i<n;i++)
        {
            a[(int)s[i]]++;
        }    
		for(i = 0;i < k;i++)
        {
			for(j = 97; a[j] && j<97 + n/k; j++)
            {
                a[j]--;
            }    
			cout<<(char)j;
		}
		cout<<endl;
	}
    TataByeBye
}