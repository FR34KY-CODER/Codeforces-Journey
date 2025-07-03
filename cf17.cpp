#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d = 0;
        cin >> n;
        int c[n], sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            sum = sum + c[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (c[i] == -1 && c[i - 1] == -1)
            {
                sum = sum + 4;
                break;
            }
        }
        if (d == 0)
        {
            for (int i = 0; i < n; i++)
                if (c[i] == 1 && c[i + 1] == -1)
                {
                    sum = sum;
                    d = 2;
                    break;
                }
        }
        if (d == 0)

        {
            for (int i = 0; i < n; i++)
            {
                if (c[i] == 1 && c[i + 1] == 1)
                    sum = sum - 4;
                break;
            }
        }
        cout << sum << endl;
    }
    return 0;
}