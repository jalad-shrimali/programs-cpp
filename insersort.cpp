#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Unsortd array is:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i++)
    {
        int current_no=arr[i];
        int j=i-1;
        while(arr[j]>current_no)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current_no;
    }
     cout<<"Sortd array is: by insertion sort"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}