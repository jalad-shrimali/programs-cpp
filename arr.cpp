#include<iostream>
using namespace std;
int main()
{
// int array[4]={2,4,5,2};
// cout<<array[3]<<endl;
int n;
cin>>n;
int array[n];
for(int i=0;i<n;i++)
{
    cin>>array[i];
}
int sum=0;
for(int i=0;i<n;i++)
{
    sum+=array[i];
}
    cout<<sum<<endl;

return 0;
} /*competative by recursion
int getSum(int ar[], int n)
{
    return 0;
    return (getSum(ar,n-1)+a[n-1]);
}
int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    cout<<getSum(a,t);
}

*/
