// Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).

// Example 1:
// Input:
// x = 5
// Output: 2
// Explanation: Since, 5 is not a perfect 
// square, floor of square_root of 5 is 2.

class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here
        long long start = 0;
        long long end = x;
        long long ans = -1;
        while(start<=end)
        {
            long long mid = start + (end - start)/2;
            if(mid * mid == x)
                return mid;
            else if(mid*mid>x)
                end =mid- 1;
            else
            {
                start = mid +1;
                ans = mid;
            }
            
        }
        return ans;
    }
};
