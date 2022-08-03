#include"../inc/solution.hpp"

int Solution::findMin(std::vector<int>& nums)
{
    int L{0}, R = nums.size()-1, M{0};  // L denotes index of Leftmost element of nums, R Rightmost, M Midpoint of L and R
    while(L != R)  // a single element vector is handled by jumping straight to return statement
    { 
        if(nums[L] < nums[R]){ return nums[L]; }  // the current range is sorted, return lowest value
        M = L + (R-L)/2;  // compute the midpoint index 
        nums[M] > nums[R] ? L = M+1 : R = M;  // if current range is unsorted then min element must be in right half, otherwise left
    }
    return nums[L];  // once endpoints of binary search have converged, we've found the minimum element of nums 
}