class Pair {
    int key;
    int value;
    public Pair(int key,int value){
        this.key = key;
        this.value = value;
    }
}

class Solution {
public static int[] calculateNSLIndex(int[] arr, int n) {
        int[] res = new int[n];
        Stack<Pair> st = new Stack<>();
        for (int i = 0; i < n; i++) {
            if (st.empty()) {
                res[i] = -1;
                st.add(new Pair(i, arr[i]));
            } else if (st.size() > 0 && st.peek().value < arr[i]) {
                res[i] = st.peek().key;
                st.add(new Pair(i, arr[i]));
            } else if (st.size() > 0 && st.peek().value >= arr[i]) {
                while (st.size() > 0 && st.peek().value >= arr[i]) {
                    st.pop();
                }
                if (st.size() == 0) {
                    res[i] = -1;
                } else {
                    res[i] = st.peek().key;
                }
                st.add(new Pair(i, arr[i]));
            }
        }
        return res;
    }
    
    public static int[] calculateNSRIndex(int[] arr, int n) {
        int[] resOfNSR = new int[n];
        Stack<Pair> s = new Stack<>();

        for (int i = n-1; i >= 0; i--) {
            if (s.empty()) {
                resOfNSR[i] = n;
                s.add(new Pair(i, arr[i]));
            } else if (s.size() > 0 && s.peek().value < arr[i]) {
                resOfNSR[i] = s.peek().key;
                s.add(new Pair(i, arr[i]));
            } else if (s.size() > 0 && s.peek().value >= arr[i]) {
                while (s.size() > 0 && s.peek().value >= arr[i]) {
                    s.pop();
                }
                if (s.size() == 0) {
                    resOfNSR[i] = n;
                } else {
                    resOfNSR[i] = s.peek().key;
                }
                s.add(new Pair(i, arr[i]));
            }
        }
        return resOfNSR;
    }

    public int largestRectangleArea(int[] hist) {

        if(hist.length == 1)
            return hist[0];


        int[] nslIndex = calculateNSLIndex(hist, hist.length);
        int[] nsrIndex = calculateNSRIndex(hist, hist.length);
        int[] width = new int[nsrIndex.length];
        int[] area = new int[hist.length];
        for (int i = 0; i < nsrIndex.length; i++) {
            width[i] = nsrIndex[i]-nslIndex[i]-1;
        }
        for (int i = 0; i< hist.length; i++) {
            area[i] = hist[i]*width[i];
        }
        int max = area[0];
        for (int i = 1; i < area.length; i++) {
            if(area[i] > max) {
                max = area[i];
            }
        }
        return max;
    }
}
