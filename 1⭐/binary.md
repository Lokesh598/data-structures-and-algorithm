DFS Iterative Traversal

Inorder

    class Solution {
        public List<Integer> inorderTraversal(TreeNode root) {
            List<Integer> list = new ArrayList<>();
            Stack<TreeNode> stack = new Stack<>();
            while(stack.size() > 0 || root != null) {
                while(root != null) {
                    stack.add(root);
                    root = root.left;
                }
                root = stack.pop();
                list.add(root.val);
                root = root.right;
            }
    
            return list;
        }
    }

    
Preorder

    class Solution {
        public List<Integer> preorderTraversal(TreeNode root) {
            List<Integer> list = new ArrayList();
            if(root == null)
                return list;
            Stack<TreeNode> stack = new Stack();
            stack.add(root);
            while(!stack.isEmpty()) {
                root = stack.pop();
                list.add(root.val);
                if(root.right != null)
                    stack.add(root.right);
                if(root.left != null)
                    stack.add(root.left);
            }
            
            return list;
        }
    }

    
Postorder

    class Solution {
        public List<Integer> postorderTraversal(TreeNode root) {
            List<Integer> list = new ArrayList();
            Stack<TreeNode> stack = new Stack();
            while(!stack.isEmpty() || root != null) {
                if(root != null) {
                    stack.add(root);
                    root = root.left;
                } else {
                    TreeNode temp = stack.peek().right;
                    if(temp == null) {
                        temp = stack.pop();
                        list.add(temp.val);
                        while(!stack.isEmpty() && temp ==  stack.peek().right) {
                            temp = stack.pop();
                            list.add(temp.val);
                        }
                    } else {
                        root = temp;
                    }
                }
            }
            
            return list;
        }
    }

    
Postorder from Preorder - Reverse the steps of pushing left and right child into stack and reverse full list in the end.

    class Solution {
        public List<Integer> postorderTraversal(TreeNode root) {
            List<Integer> list = new ArrayList();
            if(root == null)
                return list;
            Stack<TreeNode> stack = new Stack();
            stack.add(root);
            while(!stack.isEmpty()) {
                root = stack.pop();
                list.add(root.val);
                if(root.left != null)
                    stack.add(root.left);
                if(root.right != null)
                    stack.add(root.right);
            }
            Collections.reverse(list);
            return list;
        }
    }

    
DFS Recrsive Traversal

Inorder

    class Solution {
        public List<Integer> inorderTraversal(TreeNode root) {
            List<Integer> list = new ArrayList();
            dfs(root, list);
            return list;
        }
        
        private void dfs(TreeNode root, List<Integer> list) {
            if(root == null)
                return;
            dfs(root.left, list);
            list.add(root.val);
            dfs(root.right, list);
        } 
    }

    
Preorder

    class Solution {
        public List<Integer> preorderTraversal(TreeNode root) {
            List<Integer> list = new ArrayList();
            dfs(root, list);
            return list;
        }
        
        private void dfs(TreeNode root, List<Integer> list) {
            if(root == null)
                return;
            list.add(root.val);
            dfs(root.left, list);
            dfs(root.right, list);
        }
    }

    
Postorder

    class Solution {
        public List<Integer> postorderTraversal(TreeNode root) {
            List<Integer> list = new ArrayList();
            dfs(root, list);
            return list;
        }
        
        private void dfs(TreeNode root, List<Integer> list) {
            if(root == null)
                return;
            dfs(root.left, list);
            dfs(root.right, list);
            list.add(root.val);
        }
    }

    
BFS / Level Order Traversal

Level Order Traversal

    class Solution {
        public List<Integer> levelOrder(TreeNode root) {
            List<Integer> result = new ArrayList();
            if(root == null)
                return result;
            
            Queue<TreeNode> q = new LinkedList();
            q.add(root);
            while(q.size() > 0) {
                root = q.poll();
                result.add(root.val);
                if(root.left != null)
                    q.add(root.left);
                if(root.right != null)
                    q.add(root.right);
            }
            
            return result;
        }
    }

    
Level Order Level By Level https://leetcode.com/problems/binary-tree-level-order-traversal/
Application - https://leetcode.com/problems/average-of-levels-in-binary-tree/

    class Solution {
        public List<List<Integer>> levelOrder(TreeNode root) {
            List<List<Integer>> result = new ArrayList();
            if(root == null)
                return result;
            
            Queue<TreeNode> q = new LinkedList();
            q.add(root);
            while(q.size() > 0) {
                int size = q.size();
                List<Integer> level = new ArrayList();
                while(size-- > 0) {
                    root = q.poll();
                    level.add(root.val);
                    if(root.left != null)
                        q.add(root.left);
                    if(root.right != null)
                        q.add(root.right);
                }
                result.add(level);
            }
            
            return result;
        }
    }

    
ZigZag Level Order https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

    class Solution {
        public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
            List<List<Integer>> result = new ArrayList();
            if(root == null)
                return result;
            
            Queue<TreeNode> q = new LinkedList();
            q.add(root);
            boolean isLevelOdd = false;
            while(q.size() > 0) {
                int size = q.size();
                List<Integer> level = new ArrayList();
                while(size-- > 0) {
                    root = q.poll();
                    level.add(root.val);
                    if(root.left != null)
                        q.add(root.left);
                    if(root.right != null)
                        q.add(root.right);
                }
                if(isLevelOdd) 
                    Collections.reverse(level);
                result.add(level);
                isLevelOdd = !isLevelOdd;
            }
            
            return result;
        }
    }

    
Minimum and Maximum Depth

Minimum - https://leetcode.com/problems/minimum-depth-of-binary-tree/

    class Solution {
        public int minDepth(TreeNode root) {
            if(root == null)
                return 0;
            if(root.left == null)
                return 1 + minDepth(root.right);
            if(root.right == null)
                return 1 + minDepth(root.left);
            return 1 + Math.min(minDepth(root.left), minDepth(root.right));
        }
    }

    
Maximum https://leetcode.com/problems/maximum-depth-of-binary-tree/

    class Solution {
        public int maxDepth(TreeNode root) {
            if(root == null)
                return 0;
            if(root.left == null)
                return 1 + maxDepth(root.right);
            if(root.right == null)
                return 1 + maxDepth(root.left);
            return 1 + Math.max(maxDepth(root.left), maxDepth(root.right));
        }
    }

    
Same Tree https://leetcode.com/problems/same-tree/

    class Solution {
        public boolean isSameTree(TreeNode p, TreeNode q) {
            if(p == null && q == null)
                return true;
            if(p == null || q == null)
                return false;
            return p.val == q.val &&  isSameTree(p.left, q.left) && isSameTree(p.right, q.right);
        }
    }

    
Symmetric Tree https://leetcode.com/problems/symmetric-tree/

    class Solution {
        public boolean isSymmetric(TreeNode root) {
            if(root == null)
                return true;
            return dfs(root.left, root.right);
        }
        
        private boolean dfs(TreeNode p, TreeNode q) {
            if(p == null && q == null)
                return true;
            if(p == null || q == null)
                return false;
            return p.val == q.val && dfs(p.left, q.right) && dfs(p.right, q.left);
        }
    }

    
Balanced Binary Tree https://leetcode.com/problems/balanced-binary-tree/

O(N^2)

    class Solution {
        public boolean isBalanced(TreeNode root) {
            if(root == null)
                return true;
            int lh = height(root.left);
            int rh = height(root.right);
            return Math.abs(lh - rh) <= 1 && isBalanced(root.left) && isBalanced(root.right);
        }
        
        private int height(TreeNode node) {
            if(node == null)
                return 0;
            return Math.max(height(node.left), height(node.right)) + 1;
        }
    }

    
O(N)

    class Solution {
        public boolean isBalanced(TreeNode root) {
            return height(root) != -1;
        }
        
        private int height(TreeNode node) {
            if(node == null)
                return 0;
            int left = height(node.left);
            int right = height(node.right);
            if(left == -1 || right == -1 || Math.abs(left - right) > 1) 
                return -1; // unbalanced
            return Math.max(left, right) + 1;
        }
    }

    
Side Views of Binary Tree

Left Side View Using Level by Level Order Traversal
https://leetcode.com/problems/find-bottom-left-tree-value/ Just return the last value from the left view

    class Solution {
        public List<Integer> leftSideView(TreeNode root) {
            List<Integer> result = new ArrayList();
            if(root == null)
                return result;
            
            Queue<TreeNode> q = new LinkedList();
            q.add(root);
            while(q.size() > 0) {
                int size = q.size();
                result.add(q.peek().val);
                while(size-- > 0) {
                    root = q.poll();
                    if(root.left != null)
                        q.add(root.left);
                    if(root.right != null)
                        q.add(root.right);
                }
            }
            
            return result;
        }
    }

    
Left Side View DFS

    class Solution {
        public List<Integer> rightSideView(TreeNode root) {
            List<Integer> result = new ArrayList();
            dfs(root, result, 0);
            return result;
        }
        
        private void dfs(TreeNode node, List<Integer> result, int level) {
            if(node == null)
                return;
            if(result.size() == level)
                result.add(node.val);
            dfs(node.left, result, level + 1);
    		dfs(node.right, result, level + 1);
        }
    }

    
Right Side View Using Level by Level Order Traversal - https://leetcode.com/problems/binary-tree-right-side-view/

    class Solution {
        public List<Integer> rightSideView(TreeNode root) {
            List<Integer> result = new ArrayList();
            if(root == null)
                return result;
            
            Queue<TreeNode> q = new LinkedList();
            q.add(root);
            while(q.size() > 0) {
                int size = q.size();
                result.add(q.peek().val);
                while(size-- > 0) {
                    root = q.poll();
                    if(root.right != null)
                        q.add(root.right);
                    if(root.left != null)
                        q.add(root.left);
                }
            }
            
            return result;
        }
    }

    
Right Side View DFS

    class Solution {
        public List<Integer> rightSideView(TreeNode root) {
            List<Integer> result = new ArrayList();
            dfs(root, result, 0);
            return result;
        }
        
        private void dfs(TreeNode node, List<Integer> result, int level) {
            if(node == null)
                return;
            if(result.size() == level)
                result.add(node.val);
            dfs(node.right, result, level + 1);
            dfs(node.left, result, level + 1);
        }
    }

    
Bottom View Using Level Order Level by Level + Helper Node class to Maintain Node with Horizontal Distance HD

    class Solution {
    	// Helper Node + Hd class
        class TreeNodeWithHD {
            TreeNode node;
            int hd;
            
            public TreeNodeWithHD(TreeNode node, int hd) {
                this.node = node;
                this.hd = hd;
            }
        }
        
        public List<Integer> bottomView(TreeNode root) {
            if(root == null)
                return new ArrayList();
    		// Used to maintain the order of nodes hd = (-Inf to + Inf) or left to right
            TreeMap<Integer, Integer> treeMap = new TreeMap(); 
            Queue<TreeNodeWithHD> q = new LinkedList();
            q.add(new TreeNodeWithHD(root, 0));
            while(q.size() > 0) {
                TreeNodeWithHD temp = q.poll();
                treeMap.put(temp.hd, temp.node.val);
                if(temp.node.left != null)
                    q.add(new TreeNodeWithHD(temp.node.left, temp.hd - 1));
                if(temp.node.right != null)
                    q.add(new TreeNodeWithHD(temp.node.right, temp.hd + 1));
            }
            
            return new ArrayList(treeMap.values());
        }
    }

    
Top View Using Level Order Level by Level + Helper Node class to Maintain Node with Horizontal Distance HD

    class Solution {
        class TreeNodeWithHD {
            TreeNode node;
            int hd;
            
            public TreeNodeWithHD(TreeNode node, int hd) {
                this.node = node;
                this.hd = hd;
            }
        }
        
        public List<Integer> topView(TreeNode root) {
            if(root == null)
                return new ArrayList();
    		// Used to maintain the order of nodes hd = (-Inf to + Inf) or left to right
            TreeMap<Integer, Integer> treeMap = new TreeMap();
            Queue<TreeNodeWithHD> q = new LinkedList();
            q.add(new TreeNodeWithHD(root, 0));
            while(q.size() > 0) {
                TreeNodeWithHD temp = q.poll();
                if(!treeMap.containsKey(temp.hd)) // this is the extra line only in top view as compare to bottom view
                    treeMap.put(temp.hd, temp.node.val);
                if(temp.node.left != null)
                    q.add(new TreeNodeWithHD(temp.node.left, temp.hd - 1));
                if(temp.node.right != null)
                    q.add(new TreeNodeWithHD(temp.node.right, temp.hd + 1));
            }
            
            return new ArrayList(treeMap.values());
        }
    }

    
Top View Below implementation of Top View using recursive dfs approach where we need to maintain level of nodes as well b/c we don't in any level nodes can come for same hd and we have to pick top one only.

    class Solution {
        public List<Integer> topView(TreeNode root) {
            TreeMap<Integer, int[]> treeMap = new TreeMap<>();
            dfs(root, 0, 0, treeMap);
            List<Integer> result = new ArrayList();
            for(int[] v : treeMap.values())
                result.add(v[0]);
            return result;
        }
        
        private void dfs(TreeNode node, int hd, int level, TreeMap<Integer, int[]> treeMap) {
            if(node == null)
                return;
    		// if(!treeMap.containsKey(hd) || level >= treeMap.get(hd)[1]) // for bottom view dfs code
            if(!treeMap.containsKey(hd) || level < treeMap.get(hd)[1]) 
                treeMap.put(hd, new int[] {node.val, level});
            dfs(node.left, hd - 1, level + 1, treeMap);
            dfs(node.right, hd + 1, level + 1, treeMap);
        }
    }

    
Boundary Traversal Anticlockwise

    class Solution {
        public List<Integer> boundaryOfBinaryTree(TreeNode root) {
            List<Integer> result = new ArrayList();
            if(root == null)
                return result;
                
            result.add(root.val);
            leftSide(root.left, result);
            leafNode(root.left, result);
            leafNode(root.right, result);
            rightSide(root.right, result);
            
            return result;
        }
        
        private void leftSide(TreeNode node, List<Integer> result) {
            if(node == null)
                return;
            if(node.left != null) {
                result.add(node.val);
                leftSide(node.left, result);
            } else if(node.right != null) {
                result.add(node.val);
                leftSide(node.right, result);
            }
        }
        
        private void leafNode(TreeNode node, List<Integer> result) {
            if(node == null)
                return;
            leafNode(node.left, result);
            if(node.left == null && node.right == null)
                result.add(node.val);
            leafNode(node.right, result);
        }
        
        
        private void rightSide(TreeNode node, List<Integer> result) {
            if(node == null)
                return;
            if(node.right != null) {
                rightSide(node.right, result);
                result.add(node.val);
            } else if(node.left != null) {
                rightSide(node.left, result);
                result.add(node.val);
            }
        }
    }
