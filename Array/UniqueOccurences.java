public class UniqueOccurences {
    public boolean uniqueOccurrences(int[] arr) {
//        Map<Integer, Integer> mp = new Hashmap<>();
//        Map<Integer> set = new Hashset<>();
        HashMap<Integer, Integer> mp = new HashMap<>();
        HashSet<Integer> set = new HashSet<>();
        //key, value
        for (int it : arr) {
            mp.put(it, mp.getOrDefault(it, 0)+1);
        }

        for (int i: arr) {

            set.add(mp.get(i));
        }

        return mp.size() == set.size();
    }

    public static void main(String[] args) {
        UniqueOccurences o = new UniqueOccurences();
        int[] arr = new int[] {-3,0,1,-3,1,1,1,-3,10,0};
        System.out.println(o.uniqueOccurrences(arr));
    }
}
