#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i, j, k;
    for(i=n; i>0; i--)
    {
        if(i==n || i==1)
        {
            for(j=n; j>0; j--)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for(k=1; k<=(n-2); k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}