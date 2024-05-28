class Solution {
    public int equalSubstring(String s, String t, int maxCost) {
        
        int win = 0;
        int curCost = 0, start = 0; 
        for (int i = 0; i < s.length(); i++) {
            curCost += Math.abs(s.charAt(i)-t.charAt(i));

            while (curCost > maxCost) { //invalid
                curCost -= Math.abs(s.charAt(start)-t.charAt(start));  
                start++;
            }
            win = Math.max(win, i - start + 1);
        }
        
        return win;
    }
}
