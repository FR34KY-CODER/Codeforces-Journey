#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   int a[n];
   for (int i = 0; i < n; i++)
   {
        cin>>a[i];
   }
   long long int q;
   cin>>q;
   int *p;
  // allocating memory to the pointer variable using malloc()
  p = (int*) malloc(sizeof(int)*q);   
  for(int i=0;i<q;i++) 
  { 
      cin >> *(p+i);
  }     
   for (int i = 0; i < q; i++)
   {
        int c=0;
        for (int j = 0; j < n; j++)
        {
         if(*(p+i) >= a[j])
         c++;
        }
        cout<<c<<endl;
   }
   return 0;
}