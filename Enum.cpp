#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
int main()
{
    //enum is kind of reverse for a array 
    //in array we store values in certain 'i'th position 
    //where enum has values and in output shows its position value
    //For e.g.
    enum Meal {breakfast, lunch, snacks, dinner};
    cout<<breakfast<<endl;  //Output 0
    cout<<lunch<<endl;      //Output 1
    cout<<snacks<<endl;     //Output 2
    cout<<dinner<<endl;     //Output 3

    enum Meal2 {fast, food};
    Meal2 m2 = food;
    cout<<m2;               //Output 1
    return 0;
}