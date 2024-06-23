class KthLargestElement {
    public static int partition(int[] arr, int p, int q) {
        int pivot = arr[p];
        int i = p;
        for (int j = p+1; j <= q; j++) {
            if (arr[j] <= pivot) {
                i++;
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[p];
        arr[p] = tmp;
        return i;
    }
    public static int quickSelect(int[] arr, int low, int high, int x) {
        if (low == high) return arr[low];

        int m = partition(arr, low, high);
        if (m == x) {
            return arr[x];
        } else if (m > x) {
            return quickSelect(arr, low, m-1, x);
        } else {
            return quickSelect(arr, m+1, high, x);
        }
    }
    public static int kthLargestElement (int[] arr, int x) {
        return quickSelect(arr, 0, arr.length-1, arr.length-x);
    }
    public static void main(String[] args) {
        System.out.println(kthLargestElement(new int[]{1, 4, 2, 6, 7}, 2));
    }
}
