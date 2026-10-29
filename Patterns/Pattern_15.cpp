#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i, j;
    for(i=n; i>0; i--)
    {
        char c = 'A';
        for(j=i; j>0; j--)
        {
            cout << c;
            c++;
        }
        cout << endl;
    }
    return 0;
}