//To count number of odd elements in an array
#include <iostream>
using namespace std;

class solution{
    public:
    int odd_elements(int arr[], int n){
        int oddcount = 0;
        for(int i=0; i<n; i++){
            if(arr[i] % 2 != 0)
                oddcount++;
        }
        return oddcount;
    }
};
int main(){
    solution object;
    int n;
    cout << "Enter number of elements for array: ";
    cin >> n;
    n = abs(n); //To convert to +ve number if a -ve number is entered
    int arr[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Number of odd elements in the array = " << object.odd_elements(arr, n);
    return 0;
}