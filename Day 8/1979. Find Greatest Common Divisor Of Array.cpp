// Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.

// The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.


// Example 1:
// Input: nums = [2,5,6,9,10]
// Output: 2
// Explanation:
// The smallest number in nums is 2.
// The largest number in nums is 10.
// The greatest common divisor of 2 and 10 is 2.

class Solution {
public:
    int gcd(int a, int b){
    if(a==b)
        return a;
    
    if(a==0)
        return b;
    
    if(b==0)
        return a;
    
    if(a>b)
       return gcd(a-b,b);
    
     return gcd(a,b-a);
    
}

int findGCD(vector<int>& nums) {
    int min = *min_element(nums.begin(),nums.end());    //find smallest element from array
    int max = *max_element(nums.begin(),nums.end());  //find greatest element from array
    
    return gcd(min,max);
}
};
