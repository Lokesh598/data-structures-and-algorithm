class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int first=arr[0];
	    int second = arr[1];
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]>first){
	            second = first;
	            first=arr[i];
	        }
	        else if(arr[i]>second&&arr[i]!=first){
	            second = arr[i];
	        }
	        else if(first == second && arr[i]<second)
	            second =arr[i];
	    }
	    if(second<first){
	        return second;
	    }
	    else{
	        return -1;
	    }
	}   
};
