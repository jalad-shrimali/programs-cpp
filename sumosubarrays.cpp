#include "bits/stdc++.h"
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

        int crr=0;
        for(int i=0;i<n;i++)
        {
            crr=0;
            for(int j=i;i<n;j++)
            {
                crr+=arr[j];
                cout<<arr[j]<<endl;
            }
        }
        return 0;
}