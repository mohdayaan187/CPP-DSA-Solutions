#include <iostream>
using namespace std;
int main()
{
    int n; 
    cout << "Enter value of n: ";
    cin >> n;
    int i, j, k, x;
    int y = n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << j;
        }
        for(k=1; k<=((y-1)*2); k++)
        {
            cout << " ";
        }
        y--;
        for(x=i; x>0; x--)
        {
            cout << x;
        }
        cout << endl;
    }
    return 0;
}