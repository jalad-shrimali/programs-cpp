#include<iostream>
using namespace std;
int area(int r)
{
   int area=3.14*r*r;
    return area;
}
int main()
{
    int r;
cin>>r;
// cout<<"area is:"<<endl;
cout<<area(r);
}