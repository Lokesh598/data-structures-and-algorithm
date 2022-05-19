// problem statement:
// given an array of 0,1,2 values, sort the array in ascending order
#include <iostream>

using namespace std;
void sort012(int arr[], int n) { // O(n2)
    
   for(int i = 0; i < n; i++) {
       for(int j = i; j > 0; j--) {
           if(arr[j] < arr[j-1]) {
               swap(arr[j], arr[j-1]);
           } else {
               break;
           }
       }
   }
}

class Solution {
public:
    void sort012(int A[], int n) {
        int i = 0, j = n-1;
        int k = 0;
        while(k <= j) {
            if(A[k] == 0) {
                swap(A[i], A[k]);
                i++;
                k++;
            } else if(A[k] == 2) {
                swap(A[j], A[k]);
                j--;
            } else {
                k++;
            }
        }
    }
};


int main() {
    Solution s;
    int arr[] = {0, 2, 1, 2, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    s.sort012(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}