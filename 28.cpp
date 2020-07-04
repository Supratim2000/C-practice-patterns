#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n][n/2+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n/2+1;j++)
        {
            if(i==0 || i==n-1 || j==0 || j==n/2 || i==n/2)
                arr[i][j]='*';
            else
                arr[i][j]=' ';
        }
    }
    arr[0][0]=arr[0][n/2]=arr[n/2][0]=arr[n/2][n/2]=arr[n-1][0]=arr[n-1][n/2]=' ';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n/2+1; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}