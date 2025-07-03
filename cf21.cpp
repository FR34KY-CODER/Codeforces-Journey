#include<iostream>
#include<string>
using namespace std;
int main() 
{
    int atr;
    cin >> atr;
    string s = "codeforces";
    while (atr--)
    {
        char q;
        cin>>q;
        if (s.find(q) != string::npos) 
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    return 0;
}