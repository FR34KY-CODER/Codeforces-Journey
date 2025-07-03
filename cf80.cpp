#include <bits/stdc++.h>

using namespace std;

int main()
{
    int kashodhan;
    cin >> kashodhan;
    while (kashodhan--)
    {
        int ansh, cake; 
        int ank__01 = 1000000;
        int ank__10 = 1000000;
        int ank__11 = 1000000;
        string ladi;
        cin >> ansh;
        while (ansh--)
        {
            cin >> cake;
            cin >> ladi;
            if (ladi[0] == '0' && ladi[1] == '1')
            {
                ank__01 = min(cake, ank__01);
            }
            else if (ladi[0] == '1' && ladi[1] == '0')
            {
                ank__10 = min(cake, ank__10);
            }
            else if (ladi[0] == '1' && ladi[1] == '1')
            {
                ank__11 = min(ank__11, cake);
            }
        }
        int mini = min(ank__10 + ank__01, ank__11);

        if (mini == 1000000)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << mini << endl;
        }
    }
    return 0;
}