#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
       int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    // cout<<"2D array:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     int x;
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==x)
            {
                cout<<"Array found at "<<i<<" "<<j<<endl;
            flag=true;
            }      
          }
    }
    if(!flag)
    {
        cout<<"Array not found"<<endl;
    }
}