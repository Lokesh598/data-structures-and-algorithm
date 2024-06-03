class Solution {
    public int appendCharacters(String s, String t) {
        int m = s.length();
        int n = t.length();
        int f = 0, sec = 0;
        while (f < m && sec < n) {
            if (s.charAt(f) == t.charAt(sec)) {
                sec++;
            }
            f++;
        }
        return n - sec;
    }
}
