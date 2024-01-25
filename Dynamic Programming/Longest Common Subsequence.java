class Solution {
    static int[][] tb;
    public int longestCommonSubsequence(String s1, String s2) {
        int x = s1.length();
        int y = s2.length();
        tb = new int[x+1][y+1];
        for (int[] row: tb) {
            Arrays.fill(row, 0);
        }
        for(int i = 1; i<x+1; i++) {
            for (int j = 1; j < y + 1; j++) {
                if(s1.charAt(i-1) == s2.charAt(j-1)) {
                    tb[i][j] = 1 + tb[i-1][j-1];
                } else {
                    tb[i][j] = Math.max(tb[i][j-1], tb[i-1][j]);
                }
            }
        }
        return tb[x][y];
    }
}
