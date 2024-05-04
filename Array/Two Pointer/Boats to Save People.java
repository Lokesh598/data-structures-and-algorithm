class Solution {
    public int numRescueBoats(int[] people, int limit) {

        Arrays.sort(people);
        int ans = 0;
        int l = 0, r = people.length-1;
        while (l <= r) {
            ans++;
            if (people[l] + people[r] <= limit) {
                l++;
            }
            r--;
        }
        return ans;
    }
}
