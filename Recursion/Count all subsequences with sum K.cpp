	class Solution{

	public:
	int checkSubsets(int ind, int s, int arr[], int n, int sum) {
	    
	    if(ind == n) {
	        if(s == sum) {
	            return 1;
	        }
	        return 0;
	    }
	    //take and not take condition
	    s += arr[ind];
	    int l = checkSubsets(ind+1, s, arr, n, sum);// take
	    s -= arr[ind];
	    int r = checkSubsets(ind+1, s, arr, n, sum);//not take
	    return l+r;
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        return checkSubsets(0, 0, arr, n, sum);
        
	}
	  
};

main() {
  int arr[] = {2, 3, 5, 6, 8, 10};
  int n = 6;
  int sum = 10;
  cout << perfectSum(arr, n, sum); //3
}
