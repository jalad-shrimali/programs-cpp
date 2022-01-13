#include<iostream>
using namespace std;
int check(int n)
{
    if(n%2==0)
    {
        cout<<"Even No.";
    }
    else
    {
        cout<<"Odd no.";
    }
    return n;
}
int main()
{
int n;
cout<<"enter n"<<endl;
cin>>n;
cout<<check(n);
} 