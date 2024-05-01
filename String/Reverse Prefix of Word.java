class Solution {
    public String reversePrefix(String word, char ch) {
        
        int l = 0, r = word.length()-1;
        int f = 0;
        char[] arr = word.toCharArray();
        //index of first occarance
        while (l <= r) {
            if (arr[l] == ch){
                f = l;
                break;
            }
            l++;
        }
        //reverse to substring

        l = 0;
        while (l < f) {

            char tmp = arr[l];
            arr[l] = arr[f];
            arr[f] = tmp;

            l++; f--;
        }
        String reversed = new String(arr);
        return reversed;
    } 
}
