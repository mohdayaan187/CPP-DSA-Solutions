//To reverse an array by making changes in the same array without creating a duplicate copy
#include <iostream>
using namespace std;

class solution{
    public:
    void reverse_array(int arr[], int n){
        int temp;
        for(int i=0; i<n/2; i++){
            temp = arr[i];
            arr[i] = arr[n-i-1];
            arr[n-i-1] = temp;
        } //can also use swap(a,b) function
        return;
    }
};
int main(){
    solution object;
    int n;
    cout << "Enter number of elements for array: ";
    cin >> n;
    n = abs(n);
    int arr[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    object.reverse_array(arr, n);    
    cout << "Reversed array is: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}