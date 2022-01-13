#include<iostream>
using namespace std;

int main()
{
    int a=10;
    // int* aptr=&a;//here  a pointer(aptr) stores the address of a
    // cout<<&a<<endl;//returns address of a
    // cout<<aptr<<endl;//it gives the value stored in a

    int* aptr=&a;
    cout<<*aptr<<endl;//retgurns the address of a if you print aptr but if you print *aptr then it prints the first value of a
    *aptr=20;
    cout<<a<<endl;//modifie value of a  with the use of pointers
   
    
}