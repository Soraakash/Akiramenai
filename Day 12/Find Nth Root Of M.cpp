// You are given 2 numbers (n , m); the task is to find n√m (nth root of m).
 
// Example 1:

// Input: n = 2, m = 9
// Output: 3
// Explanation: 3^2 = 9

class Solution{
	public:
	double multiply(int n, int mid){ //avoiding integer overflow
	    
	    double mul = 1;
	    for(int i=1; i<=n; i++)
	        mul = mul * mid;
	        
	    return mul;
	}
	int NthRoot(int n, int m)
	{
	    // Code here.
	    int start = 1;
	    int end = m;
	    int res = -1;
	    while(start<=end)
	    {
	        int mid = start + (end- start)/2;
	        if(multiply(n,mid)== m)
	            return mid;
	       else if(multiply(n,mid) > m)
	            end = mid-1;
	       else
	           start = mid + 1;
	    }
	     return -1; 
	}  
};
