#include<iostream>
using namespace std;
int fact(int lim)
{
    int facto=1;
    for(int i=2;i<=lim;i++)
    {
facto*=i;
    }
    return facto;
}
int main()
{
    int n,r;
    cin>>n>>r;
     //nCr=     n!/(r!*(n-r)!)
    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
    return 0;
}