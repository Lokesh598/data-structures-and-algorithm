# Heap
  A heap is a special tree-based data structure in which the tree is the complete binary tree or almost complete binary tree.

  A heap is a useful data structure when it is necessary to repeatedly remove the object with the lowest (or highest) priority, or when insertions need to be interspersed with removals of the objects.
  
  ## What is a Complete Binary Tree or Almost Complete Binary Tree??
     So first we have to know what a binary tree is.
     
  ### What is a Binary Tree??
      
      Binary Tree Representation:
                  1. Array
                  2. Linked List
![400px-Max-Heap-new svg](https://user-images.githubusercontent.com/63910828/203391011-dddddf52-9b2d-4196-aabe-222198f9212b.png)
      Doubly Linked lists one of the applications of Binary Tree.
  
 # Heap Tree
       1. Max Heap Tree 
       2. Min Heap Tree

       1. Max Heap Tree
          In the given ACBT or CBT at every node root is maximum or equal comparing its children then it is Max Heap Tree.
          
          ***
          Max Heap Tree, Array Advantage:
          
          finding maximum element in constant time.[O(1) every case]
          
          finding minimum element (Normal array)
          use Selection Sort (first pass) [O(n) every case] and min no. of the leaf node(n/2) so total no. of comparision(n/2-1).
     
       2. Min Heap Tree
          In the give ACBT or CBT at every node root is minimum or equal comparing its children then it is Min Heap Tree.
        
       Priority Queue and Binary Heap
       Min Heap and Max Heap Implementation
       
## Priority Queue: 
   Priority Queue is a Data Structure that uses concepts of Heaps, but built on top of vector or dynamic array.
   time complexity - 
   adding single element in pq, takes logn time so for n elements it will be nlogn time.
   
suntax of priority queue__
```c++
       priority_queue<int> pq;
       
      // In C++, priority queue uses max heap by default. but for min heap we have to use a syntax ..   

       priority_queue<int, vector<int>, greater<int>> pq;
```
       
## Operations On Heap
    
### Insertion, Deletion and Build Heap

#### Heapify
     Heapify is the process of creating a heap data structure from a binary tree. It is used to create a Min-Heap or a Max-Heap.
     
##### Insertion(max-heapify method): 
      let we want to insert 100 element in Binary Tree. So max-heapify means root should be greater than childrens.
      So suppose our tree contains all node are leser than 100th node so it will be the root of given binary tree. 
      1. total comparision = logn (beacuse height of complete binary tree)
      2. total no of swaps = logn 
      every time comarision and swaps = 2logn == O(logn)
###### Time complexity 
       Insertion time in max heap or min heap with n-elements will take => O(logn)[wc, AC] and O(1) [BC].
       
###### Deletion 
       using max-heapify method we can delete maximum element with replacement by last leaf node.
       1. Total comparision = 2logn 
       2. Total swap = logn
       total = 3logn == O(logn)
       
###### Build-Heap (Building Heap)
       creating Max Heap pr Min Heap with n element with O(n) time in every case.
  
       Build-Heap-Algo(arr, n) {
          for ( i = n/2(take flor); i>= 1; i-- ) {
             maxHeapify(i);
             
             
##### Heap Data structure Application
###### learn from abdul bari -> https://www.youtube.com/watch?v=HqPJF2L5h9U
###### 1. Heap is used while implementing priority queue
###### 2. Dijkstra's Algorithm
###### 3. Heap Sort
