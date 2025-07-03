#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int h[n];
    for (int i = 0; i < n; i++)
    {
        cin>>h[i];
    }
    int min,ans=0;
    int num = 0;
	for (int i = 0;i < k;i++)
	{
		num = num + h[i];
	}
	min = num;
	ans = 1;
	for (int i = 1;i <= n-k;i++)
	{
		num = num + h[i+k-1] - h[i-1];
		if (min > num)
		{
			min = num;
			ans = i+1;
		}
	}
	cout << ans << endl;
    return 0;
}