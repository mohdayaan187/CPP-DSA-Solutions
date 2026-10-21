#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i, j;
    char c = 'A';
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
        cout << c;
        }
        c++;
        cout << endl;
    }
    return 0;
}