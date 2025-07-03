#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
 
//unions are exactly like structures but provide a better memory management in pc 
union money
{
    int rice;       //Takes 4 bytes
    char car;       //Takes 1 Byte  
    float pounds;   //Takes 4 bytes
};
//with help of union only datatype which is required or is in use takes the memory 
//unlike structure where whole structure and its all components takes the value in memory 
int main()
{
    union money m1;
    m1.rice = 34;
    cout<<m1.rice;
    //Here 34 will get printed just if i would have used a structure right?
    //But,.....
    m1.car = 'C';
    cout<<m1.rice;
    //Here a Garbage value will be shown for rice cause memory isnt allocated for this datatype of union 
    //unlike structure where it would have printed the correct value
    //But,....
    cout<<m1.car;
    //it will give output "C" cause memory for it is surely allocated 
    return 0;
}