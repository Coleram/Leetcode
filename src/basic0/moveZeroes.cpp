#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// 2025/9/30 Two Pointers (Passed: 0 ms, 23.39 MB)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int length = nums.size();
        int left = 0;
        int right = 0;
        
        while (right < length)
        {
            if (nums[right] != 0)
            {
                swap(nums[left], nums[right]);
                left++;
            }
            right++;
        }
    }
};