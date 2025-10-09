#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// 2025/10/8
// Intuitive Solution(Passed:0 ms, 13.47 MB)
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int prod = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                prod *= 1;
            }else if (nums[i] == 0)
            {
                prod = 0;
                break;
            }else{
                prod *= -1;
            }
        }
        return prod;
    }
};