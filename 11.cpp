#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i - 1; space++)
            cout << " ";
        for (int j = 0; j <= i; j++)
        {
            if(j==0 || i==n-1 || i==j)
                cout<<"*";
            else
                cout<<" ";
        }
        cout << endl;
    }
    return 0;
}