class Solution {
    public int[] searchRange(int[] arr, int target) {
        //first occurence
        int[] ans = new int[]{-1, -1};
        int l = 0, r = arr.length - 1;
        int rightInd = 0;
        while(l <= r) {
            int mid = l + (r-l)/2;
            if (arr[mid] == target) {
                rightInd = mid;
                r = mid - 1;
                ans[0] = rightInd;
            }
            else if (arr[mid] > target) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        //last occurence
        l = 0;
        r = arr.length - 1;
        int leftInd = 0;
        while(l <= r) {
            int mid = l + (r-l)/2;
            if (arr[mid] == target) {
                leftInd = mid;
                l = mid + 1;
                ans[1] = leftInd;
            }
            else if (arr[mid] > target) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
}
