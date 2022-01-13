#include<iostream>
using namespace std;
//time complexity is O(log n, base 2)
// Compare x with the middle element.
// If x matches with middle element, we return the mid index.
// Else If x is greater than the mid element, then x can only lie in right half subarray after the mid element. So we recur for right half.
// Else (x is smaller) recur for the left half.
int binarysearch(int arr[], int n, int a)
{
    int start=0;
    int end=n;
    while(start<=end)
    {
     int mid=(start+end)/2;

     if(arr[mid]==a)
     {
         return mid;
     }
     else if(arr[mid]>a)
     { 
         end =mid-1;
              }
              else{

                  start=mid+1;
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
    cout<<binarysearch(arr,n,a)<<endl;
    return 0;
}










