
void printSub(int ind, vector<int> &ds, int s, int sum, int arr[], int n) {
  
  if(ind == n) {
    if(s == sum) {
      for(auto it : ds)
        cout<< it << " ";
      cout<< endl;
    }
    return;
  }
  ds.push_back(arr[ind]);
  s += arr[ind];
  //take case
  printSub(ind+1, ds, s, sum, arr, n);
  ds.pop_back();
  s -= arr[ind];
  
  //not take case
  printSub(ind+1, ds, s, sum, arr, n);
}
int main() {

  vector<int> ds;
  int arr[] = {1,2,1};
  int n = 3;
  int sum = 2;
  printSub(0, ds, 0, sum, arr, n);
}
