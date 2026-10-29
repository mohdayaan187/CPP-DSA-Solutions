#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i, j, k, x;
    for(i=n; i>0; i--)
    {
        for(j=i; j>0; j--)
        {
            cout << "*";
        }
        for(k=1; k<=(2*(n-i)); k++)
        {
            cout << " ";
        }
        for(x=i; x>0; x--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << "*";
        }
        for(k=1; k<=(2*(n-i)); k++)
        {
            cout << " ";
        }
        for(x=1; x<=i; x++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}