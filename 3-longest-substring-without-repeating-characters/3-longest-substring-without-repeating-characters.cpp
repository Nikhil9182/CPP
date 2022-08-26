class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int windowStart = 0, windowEnd = 0, maxLength = INT_MIN;
        unordered_map<char,int> set;
        
        while(windowEnd < s.length())
        {
            if(set[s[windowEnd]] < 1)
            {
                set[s[windowEnd]] += 1;
                maxLength = max(maxLength,windowEnd-windowStart +1);
                windowEnd++;
            }
            else
            {
                set[s[windowStart]] = 0;
                windowStart++;
            }
        }
        return (maxLength == INT_MIN)?0:maxLength;
    }
};