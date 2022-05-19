// insertion sort
// dry run time: O(n^2)
// dry run space: O(1)
// dry run steps:
// 1. for i = 1 to n-1
// 2.     for j = i to 0
// 3.         if arr[j] > arr[j+1]
// 4.             swap(arr[j], arr[j+1])
// 5.             j--
// 6.             i--
// 7.             break
// 8. return arr

#include <iostream>

using namespace std;

void insertionSort(int arr[], int n) {
    
    for(int i = 1; i < n; i++) {

        for(int j = i; j > 0; j--) {
            if(arr[j] < arr[j-1]) {
                swap(arr[j], arr[j-1]);
            } else {
                break;
            }
        }
    }
}
// void insertionSort(int arr[], int n) {
//     int i, j, key;
//     for (i = 1; i < n; i++) {
//         key = arr[i];
//         j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j+1] = arr[j];
//             j = j - 1;
//         }
//         arr[j+1] = key;
//     }
// }

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
