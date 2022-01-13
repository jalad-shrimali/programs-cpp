#include<iostream>
using namespace std;
int main()
{
    int arr[]={10, 20, 30};
    // cout<<*arr<<endl;//here arr is itself storing the addres of the 0th element of arr
    int *ptr=arr;
for(int i=0;i<3;i++)
{
    //    cout<<*ptr<<endl;//we can do this operation by arr too
       //ptr++;//we can increment and decrement the pointers
       cout<<*(arr+i)<<endl;//we incremented pointer by arr+i to next memory location
       //arr++;//illegal;

}
    return 0;
}