# map and unordered_map

Both std::map & std::unordered_map store elements in key value pair & provide member functions to efficiently insert, search & delete key value pairs.


### Internal Structure of map()
map use red-black tree(self balanced binary search tree). The height of BST is always is O(logn) so the time cost of traversing/ searching/ insertion/ deletion over the BST in worst and best and average case is O(logn).

### Internal Structure of unordered_map()
unordered_map() use hash table and linked list. time cost in case of searching one element O(1) always in best and average case untilunless there is no collision, because of collision it can be O(n) in worst case when hash key is same for another field also.
