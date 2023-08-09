//Quick Sort is a Divide and Conquer algorithm that works by selecting a pivot element and partitioning the array around it.
//The pivot is placed in its correct sorted position, and then the algorithm is recursively applied to the subarrays on either side of the pivot.
#include<iostream>

using namespace std;

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }


int partition(int arr[], int p, int q)
{
    int pivot = arr[p];
    int i = p;

    for (int j = p+1; j <= q; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i], arr[p]);
    return i; //index of pivot element
}

void quickSort(int arr[], int left, int right) {
    if (left < right) {
        int m = partition(arr, left, right);

        quickSort(arr, left, m - 1);
        quickSort(arr, m + 1, right);
    }
}
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int main() {

    int arr[] = {7,3,6,1,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    quickSort(arr, 0, n-1);
    cout << endl;
    cout << "Array after sorted: " << endl;
    printArray(arr, n);
    return 0;
}

