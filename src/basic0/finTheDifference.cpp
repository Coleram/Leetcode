#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// Hash (Passed: 0 ms, 9.28 MB)
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> freq;

        for (int i = 0; i < t.size(); i++)
        {
            char c = t[i];
            if (freq.find(c) == freq.end())
            {
                freq[c] = 1;
            }
            else
            {
                freq[c] += 1;
            }
            
        }
        
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            freq[c] -= 1;
        }
        
        for (auto it = freq.begin(); it != freq.end(); it++)
        {
            if (it -> second == 1)
            {
                return it -> first;
            }
            
        }
        return 0;
    }
};