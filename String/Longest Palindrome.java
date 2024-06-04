class Solution {

    public int longestPalindrome(String s) {
        // Map to store frequency of occurrence of each character
        Map<Character, Integer> frequencyMap = new HashMap<>();
        // Count frequencies
        for (char c : s.toCharArray()) {
            frequencyMap.put(c, frequencyMap.getOrDefault(c, 0) + 1);
        }

        int res = 0;
        boolean hasOddFrequency = false;
        for (int freq : frequencyMap.values()) {
            // Check is the frequency is even
            if ((freq % 2) == 0) {
                res += freq;
            } else {
                // If the frequency is odd, one occurrence of the
                // character will remain without a match
                res += freq - 1;
                hasOddFrequency = true;
            }
        }
        // If hasOddFrequency is true, we have at least one unmatched
        // character to make the center of an odd length palindrome.
        if (hasOddFrequency) return res + 1;

        return res;
    }
}
