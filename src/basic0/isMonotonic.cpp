#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// 2025/10/8
// Sort(Passed:78 ms, 106.57 MB)
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> sorted01(nums), sorted10(nums);
        sort(sorted01.begin(), sorted01.end());
        sort(sorted10.begin(), sorted10.end(), greater<int>());

        if (nums != sorted01 && nums != sorted10)
        {
            return false;
        }
        
        return true;
    }
};

// 2025/10/16
// Intuitive Solution(Passed:0 ms, 98.19 MB)
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool up = true;
        bool down = true;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if ((nums[i] - nums[i + 1]) > 0)
            {
                up = false;
            }else if ((nums[i] - nums[i + 1]) < 0)
            {
                down = false;
            }else{
                continue;
            }

            if (!(up || down))
            {
                return false;
            }
        }
        return true;
    }
};