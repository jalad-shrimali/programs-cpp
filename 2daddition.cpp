#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int sum[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"A array:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
        int arrb[n][n];
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arrb[i][j];
        }
    }
    cout<<"B array:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arrb[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Sum of two matrix is:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum[i][j]=arr[i][j]+arrb[i][j];
            cout<<sum[i][j]<<" ";
                    }
                    cout<<endl;
    }
}