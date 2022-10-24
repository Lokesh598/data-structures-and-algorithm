void printSub(int ind, vector<int> &ds, arr[], int n) {
  
  if(ind == n) {
    for(auto it : ds) {
      cout<< it << " ";
    }
    if(ds.size() == 0) {
      cout<< "{}";
    }
    cout<<end;
    return;
  }
  //not take condition
  printSub(ind+1, ds, arr, n);
  
  //take condition
  ds.push_back(arr[ind]);
  printSub(ind+1, ds, arr, n);
  ds.pop_back();
}

int main() {
 int arr[] = {3,1,2};
  vector<int> ds;
  int n = 3;
  printSub(0, ds, arr, n);
}
