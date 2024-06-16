class Solution {
    public int hIndex(int[] citations) {
        Arrays.sort(citations);
        int start = 0, n = citations.length, end = n-1;
        int ans = 0;
        while (start <= end) {
            int mid = start+(end-start)/2;
            if (citations[mid] >= n-mid) {
                ans = Math.max(ans, n-mid);
                end = mid - 1;
            } else {
                start = mid+1;
            }
        }
        return ans;
    }
}
