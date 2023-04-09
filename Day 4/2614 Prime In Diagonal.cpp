// You are given a 0-indexed two-dimensional integer array nums.

// Return the largest prime number that lies on at least one of the diagonals of nums. In case, no prime is present on any of the diagonals, return 0.

// Note that:

// An integer is prime if it is greater than 1 and has no positive integer divisors other than 1 and itself.
// An integer val is on one of thediagonals of nums if there exists an integer i for which nums[i][i] = val or an i for which nums[i][nums.length - i - 1]= val.

  
// Example 1:
// Input: nums = [[1,2,3],[5,6,7],[9,10,11]]
// Output: 11
// Explanation: The numbers 1, 3, 6, 9, and 11 are the only numbers present on at least one of the diagonals. Since 11 is the largest prime, we return 11.

class Solution {
public:
   bool isPrime(int n)
{
    // Corner case
   if (n <= 1)
        return false;
  //suppose n=7 that is prime and its pair are (1,7)
  //so if a no. is prime then it can be check by numbers smaller than square root
  // of the n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
 
}
    int diagonalPrime(vector<vector<int>>& nums) {
        int ans = 0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++)
        {
                if(isPrime(nums[i][i]))
                    ans = max(ans,nums[i][i]);
            
        }
        for(int i=0;i<nums.size();i++)
        {
            if(isPrime(nums[i][n-i-1]))
                ans = max(ans,nums[i][n-i-1]);
        }
        return ans;
    }
};
