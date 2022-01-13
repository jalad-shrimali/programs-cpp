#include<iostream>
using namespace std;

int main()
{
    int a=50;
int* aptr=&a;
//   cout<<aptr<<endl;//address 0x61feb8
//     cout<<*aptr<<endl;//value of a 50
    int **aaptr=&aptr;
    //    cout<<*aaptr<<endl;//single derefernce returns value of aptr i.e. 0x61feb8
    //           cout<<**aaptr<<endl;//double derefernce returns value of *aptr i.e. 50

                        //pointer to pointer to pointer
              int ***atr=&aaptr;
              cout<<*atr<<endl;//returns the address of aaptr
              cout<<**atr<<endl;//returns the value stored in aaptr i.e. 0x61feb8
              cout<<***atr<<endl;// returns the value aaptr which is holding the value of aptr ie 50
}