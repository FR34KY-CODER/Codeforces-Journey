#include <bits/stdc++.h>

using namespace std;

int logic(int a, int b)
{
    int choice1, choice2, reddy;
    if (a == b)
        return INT_MAX - 1;
    choice1 = a / 3;
    choice2 = 2 * a / 3;
    reddy = a % 3;

    if (reddy != 0)
    {
        return -1;
    }
    if (choice1 == b || choice2 == b)
    {
        return INT_MAX - 1;
    }
    int c2 = logic(choice2, b);
    int c1 = logic(choice1, b);
    if (c1 == INT_MAX - 1 || c2 == INT_MAX - 1)
    {
        return INT_MAX - 1;
    }
    return -1;
}

int main()
{
    int bkl;
    cin >> bkl;
    while (bkl--)
    {
        int a, b;        
        int output;
        cin >> a >> b;
        output = logic(a, b);
        if (output == INT_MAX - 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}