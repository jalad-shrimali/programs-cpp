#include<iostream>
using namespace std;
//this is also call by reference because we are sending the address of the variables
void swap(int *a, int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}
int main()
{
    int a=10, b=20;
    int* aptr=&a;
    int* btr=&b;
    //sending the addres of a and b
    swap(&a, &b);//we can also send the by pointers swap(aptr, btr);
    cout<<a<<" "<<b<<endl;
}