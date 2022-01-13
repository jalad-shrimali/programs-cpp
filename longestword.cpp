#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n);//it inputs whole char altogether      
    cin.ignore();
    
    int i=0;
    int curlen=0;
    int maxlen=0;
     int st=0, mxst=0;

    while(1)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(curlen>maxlen)
            {
                mxst=st;
                maxlen=curlen;
            }
            st=i+1;
            curlen=0;
        }
        else
        {
            curlen++;
        }
        if(arr[i]=='\0')
        {
            break;
        }
        
        i++;
    }
    // cout<<arr<<endl;
    cout<<maxlen<<endl;
    for(int i=0;i<maxlen;i++)
    {
        cout<<arr[mxst+i];
        // cout<<endl;
    }

}