class Solution {
    public long maximumHappinessSum(int[] happiness, int k) {
        //sort the array
        Arrays.sort(happiness);
        System.out.println(happiness[happiness.length-1]);
        int N = happiness.length-1;
        long max = 0;
        int turns = 0;
        for (int i = k; i > 0; i--) {
            max += Math.max(happiness[N]-turns, 0);
            turns++;
            N--;
        }
        return max;
    }
}
