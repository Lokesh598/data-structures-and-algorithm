#include<iostream>
using namespace std;

int main() {
    int n;
    // int arr[n] = {}; // defined array with size n
    int arr[100000];
    cout << "Enter the size of array: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // take input from user
    }
    cout << "The array is: ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " "; // print array
    }

    return 0;
}
