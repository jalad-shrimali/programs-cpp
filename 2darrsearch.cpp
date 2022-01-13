#include<iostream>
using namespace std;
int main()
{
    int n,m, key;
    cin>>n>>m>>key;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    bool condi=false;
    /*   Brute Force Method
         time Complexity O(N*M)
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==key)  
                condi=true;
        }
    }*/
     //Optimized Method
    //Time Complexity O(N+M)

    //top right
    int r=0;
    int c=n-1;
    while(r<m && c>=0)
    {
         if(arr[r][c]==key) 
         { 
                condi=true;
    }
    arr[r][c]> key? c--:r++;//if arr[r][c]>key c-- else r++//ternary operators 
    }
        if(condi)        
            cout<<"Gottcha"<<endl;
        else
            cout<<"Not present"<<endl;
            

          
           
}