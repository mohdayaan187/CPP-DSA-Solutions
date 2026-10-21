#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i, j, k, x;
    for(i=1; i<=n; i++)
    {
        for(x=1; x<=(n-i); x++)
        {
            cout << " ";
        }
        char c = 'A';
        for(j=1; j<=i; j++)
        {
            cout << c;
            c++;
        }
        c--;
        for(k=1; k<=(i-1); k++)
        {
            c--;
            cout << c;
        }
        cout << endl;
    }
    return 0;
}