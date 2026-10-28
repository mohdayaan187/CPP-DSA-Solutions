#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i, j, k;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(i=n; i>=1; i--)
    {
        for(j=2; j<=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}