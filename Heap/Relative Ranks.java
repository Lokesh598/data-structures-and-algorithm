// efficient solution
class Solution {
    public String[] findRelativeRanks(int[] score) {
        
        PriorityQueue<Pair<Integer,Integer>> pQueue = new PriorityQueue<>((a,b) -> b.getKey() - a.getKey());
        for (int i = 0; i < score.length; i++) {
            pQueue.add(new Pair<>(score[i], i));
        }
        
        String[] res = new String[score.length];
        Arrays.fill(res, "0");
        int index = 1;
        while (!pQueue.isEmpty()) {
            Pair<Integer, Integer> pair = pQueue.poll();
            int originalIndex = pair.getValue();
            if (index == 1) {
                res[originalIndex] = "Gold Medal";
            } else if (index == 2) {
                res[originalIndex] = "Silver Medal";
            } else if (index == 3) {
                res[originalIndex] = "Bronze Medal";
            } else {
                res[originalIndex] = String.valueOf(index);
            }
            index++;
        }
        return res;
    }
}
