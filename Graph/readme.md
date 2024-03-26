# Graph
Graph is a non-linear data structure. 

## Can be represented in two ways...
### 1. Adjacency matrix
### 2. Adjacency List.

## Types of Graph
### 1. Undirected Graph
### 2. Directed Graph
### 3. Directed Weighted Graph
### 4. Bipartite Graph
The list can be Linked list and vector or ArrayList. but we should use Vector because vector has a cache-friendly nature.
      
      ![images](https://user-images.githubusercontent.com/63910828/184867778-19c3a59d-489d-4f3c-b610-b7656295c8be.png)

Detect Cycle in Undirected Graph

      - bfs - using parent
      - dfs - using parent

Detect cycle in Directed Graph

      - bfs - using indegree[]
      - dfs - using visited array + pathVisited Array
      in the recursive call tree, if you see an edge from one of the decedent to one of the ancestor, which is currently active in the recursive tree, 
      then here is a cycle.

## Topological sort - 
      Acyclic and Directed graph
      bfs and dfs both can be used.
      
Kahns Algorithm cyclic or not
1. store indegree of every vertex
2. create a queue, q
3. Add all 0 indegree vertices to the q
4. count = 0
5.       while ( q is not empty)
         {
               a. u = q.pop()
               b. for every adjacent v of u
                     1. Reduce indegree of v by 1
                     2. If indegree of v becomes 0, push v to the q
               c. count++;
         }
6. return (count != V)


      
