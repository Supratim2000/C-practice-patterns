#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n/2+1;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>=n/2-i+2 && j<=n/2+i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    for(int i=n/2;i>=1;i--)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>=n/2+2-i && j<=n/2+i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}