#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string a;
    cin>>a;
    for (int i = 0; i<a.size(); i++)
    {
        if(a[i] == 'W' && a[i+1] == 'U' && a[i+2] == 'B')    
        {
            i = i + 2;
            continue;
        }
        else
        {
            cout<<a[i];
            if(a[i+1] == 'W' && a[i+2] == 'U' && a[i+3] == 'B')
            {
                cout<<" ";
            }
        }
    }
    return 0;
}