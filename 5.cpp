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
        for (int j = 0; j < n; j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout << endl;
    }
    return 0;
}