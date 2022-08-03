// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

#include<iostream>
#include"../inc/solution.hpp"

int main()
{
	//std::vector<int> nums{4,5,6,7,0,1,2};  // 0
	//std::vector<int> nums{3,4,5,1,2};  // 1
	//std::vector<int> nums{11,13,15,17};  // 11
	std::vector<int> nums{5,0,1,2,3,4};  // 0

	std::cout << Solution().findMin(nums);
	return 0;
}

