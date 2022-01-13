#include<iostream>
using namespace std;
//function for linear search
int lsearch(int arr[], int n, int a)
{
//time complexity is O(n)
for(int i=0;i<n;i++)
{
    if(arr[i]==a)
    {
        return i;
    }
}
return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a;
    cout<<"Enter element to be searched"<<endl;
    cin>>a;
    // Primitive technique 
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]==a)
    //     {
    //         cout<<"Element found at:"<<arr[i]<<endl;
    //         break;
    //     }
    //     else
    //     {
    //         cout<<"Element not present"<<endl;
    //                 }
    //                 //in this code the code is compilr gives the out even when we don't want
    // }
    cout<<lsearch(arr, n, a)<<endl;
    return 0;
}