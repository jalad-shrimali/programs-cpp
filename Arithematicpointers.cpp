#include<iostream>
using namespace std;

int main()
{
    int a=50;
   int* aptr=&a;
      cout<<aptr<<endl;//address of a

   aptr++;
   cout<<aptr<<endl;//incremented aptr
return 0;
}