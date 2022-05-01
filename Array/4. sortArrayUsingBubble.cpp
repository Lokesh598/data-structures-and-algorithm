#include<iostream>
using namespace std;

class Solution {
public:
    void bubbleSort(int arr[], int n)
    {
        int i, j;
        bool swapped;
        for (i = 0; i < n-1; i++)
        {   swapped = false;
            for (j = 0; j < n-i-1; j++)
            {
                if (arr[j] > arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    swapped = true;
                    // swap(arr[j], arr[j+1]);
                }
            }
        }
    }
    // how we can optimize the bubble sort
    // 1. if the array is already sorted, then we don't need to sort it again
     
    // 1. use n-i-1 instead of n-1
    // 2. use flag to check if the array is sorted or not
};

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int main() {

    int arr[] = {7,3,6,1,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    Solution ob;
    printArray(arr, n);
    ob.bubbleSort(arr, n);
    cout << endl;
    cout << "Array after sorted: " << endl;
    printArray(arr, n);
    return 0;
}
