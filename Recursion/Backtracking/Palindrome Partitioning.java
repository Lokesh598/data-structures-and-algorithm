class Solution {
    public List<List<String>> partition(String s) {
        List<List<String>> res = new ArrayList<>();
        List<String> path = new ArrayList<>();
        funC(0, s, path, res);
        return res;
    }
    public void funC(int ind, String s, List<String> path, List<List<String>> res) {
        if (ind == s.length()) {
            res.add(new ArrayList<>(path));
            return;
        }
        for (int i = ind; i < s.length(); i++) {
            if (isPalindrome(s, ind, i)) {
                path.add(s.substring(ind, i+1));
                funC(i+1, s, path, res);
                path.remove(path.size()-1);
            }
        }
    }
    public boolean isPalindrome(String s, int start, int end) {
        while (start <= end) {
            if (s.charAt(start++) != s.charAt(end--)) {
                return false;
            }
        }
        return true;
    }
}
