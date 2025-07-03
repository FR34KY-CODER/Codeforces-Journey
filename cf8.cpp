#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string a= "hello";
    int j = 0;
    int k = 0;
    int l = s.length();
    for(int i=0; i<l; i++)
    {
        if(s[i] == a[j])
        {
            j++;
            k++;
        }    
    }
    if(k==5)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}