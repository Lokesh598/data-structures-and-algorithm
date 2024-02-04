class Solution {
    public int subarraySum(int[] arr, int k) {
        int n = arr.length; 
        Map mpp = new HashMap();
        int preSum = 0; int cnt = 0;

        mpp.put(0, 1); 
        for (int i = 0; i < n; i++) {
            preSum += arr[i];

            int remove = preSum - k;
            cnt += (int) mpp.getOrDefault(remove, 0);
            mpp.put(preSum, (int) mpp.getOrDefault(preSum, 0) + 1);
        }
        return cnt;
    }
}
