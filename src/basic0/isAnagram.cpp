#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// Hash (Passed: 7 ms, 9.81 MB)
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq;

        if (s.length() != t.length())
        {
            return false;
        }
        

        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            if (freq.find(c) == freq.end())
            {
                freq[c] = 1;
            }
            else
            {
                freq[c] += 1;
            }
        }
        
        for (int i = 0; i < t.length(); i++)
        {
            char c = t[i];
            if (freq.find(c) == freq.end())
            {
                return false;
            }
            else
            {
                freq[c] -= 1;
                if (freq[c] < 0)
                {
                    return false;
                }
            }
        }
        
        auto it = freq.begin();
        while (it != freq.end())
        {
            if (it -> second != 0)
            {
                return false;
            }
            
            it++;
        }
        
        return true;
    }
};

// Sort (Passed: 7 ms, 9.61 MB)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
        {
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
