#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>


using namespace std;

// Brute Force 2025/9/27
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    if (i != j)
                    {
                        return {i, j};
                    }
                }
            }
        }
        return {};
    }
};

// Hash Map 2025/9/28
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int, int> hash;

        for (int i = 0; i < nums.size(); i++)
        {
           int complement = target - nums[i];

           if (hash.find(complement) != hash.end())
           {
            return {hash[complement], i};
           }
           
           hash[nums[i]] = i;
        }

        return {};
    }
};
