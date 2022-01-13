#include<iostream>
using namespace std;
int main()
{
    char arr[100]="apple";//declaration
    cin>>arr;
    int i=0;
    while(arr[i]!='\0')//not equal to null character
    {
        cout<<arr[i]<<endl;
        i++;
    }
}