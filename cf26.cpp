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
        long long int n, k;
        cin>>n>>k;
        long long int sum = n;
        for (long long int i = 3; i < k; i++)
        {
            cout<<"1 ";
            sum--;
        }
        if (sum%2!= 0)
        {
            cout<<"1 "<<sum/2<<" "<<sum/2;
        }
        else if(sum%4==0)
        {
            cout<<sum/4<<" "<<sum/4<<" "<<sum/2;
        }
        else
        {
            cout<<"2 "<<(sum/2)-1<<" "<<(sum/2)-1;
        }
        cout<<endl;
    }
    return 0;
}