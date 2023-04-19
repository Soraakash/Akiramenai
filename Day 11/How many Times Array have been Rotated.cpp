// Given an ascending sorted rotated array Arr of distinct integers of size N. The array is right rotated K times. Find the value of K.

// Example 1:

// Input:
// N = 5
// Arr[] = {5, 1, 2, 3, 4}
// Output: 1
// Explanation: The given array is 5 1 2 3 4. 
// The original sorted array is 1 2 3 4 5. 
// We can see that the array was rotated 
// 1 times to the right.

class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int count = 0;
	    for(int i=0;i<n-1;i++)
	    {
	        if(arr[i]>arr[i+1])
	            count = i+1;
	    }
	    return count;
	}

};
