       tree is given like this below
          1
       /     \
     2        3
   /    \     /   \
  4     5   6    7
    \
     8
     
         //[[1],[2,3],[4,5,6,7],[8]]
         
vector<vector<int>> levelOrder(Node* node)
{
  //Your code here
  vector<vector<int>> res;
  //[{10}, {20,30}, {40,60}]
  queue<Node*> q;
  q.push(node);
  
  while(!q.empty()) {
      int size = q.size();
      
      vector<int> levels;
      for(int i = 0; i < size; i++) {
          Node* tmp = q.front();
          q.pop();
          levels.push_back(tmp->data);
          
          if(tmp->left != nullptr) {
              q.push(tmp->left);
          }
          if(tmp->right != nullptr) {
              q.push(tmp->right);
          }
      }
      res.push_back(levels);
  }
  return res;
}
