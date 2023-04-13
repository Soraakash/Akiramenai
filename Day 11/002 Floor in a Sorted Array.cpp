// Given a sorted array arr[] of size N without duplicates, and given a value x. Floor of x is 
// defined as the largest element K in arr[] such that K is smaller than or equal to x. Find the index of K(0-based indexing).

// Example 1:
// Input:
// N = 7, x = 0 
// arr[] = {1,2,8,10,11,12,19}
// Output: -1
// Explanation: No element less 
// than 0 is found. So output 
// is "-1".
  
  class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long k){
        
        // Your code here
        long long low = 0;
        long long high = n-1;
        long long mid;
        int ans = -1;
        while(low<=high)
        {
            mid = low + (high - low)/2;
            if(v[mid]<k)
            {
                ans = mid;
                low = mid+1;
            }
            else if(v[mid] == k)
            {
                return mid;
            }
            else
                high = mid-1;
        }
        return ans;
        
        
    }
};
