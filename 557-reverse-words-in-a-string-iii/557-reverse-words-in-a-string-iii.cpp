class Solution {
public:
    string reverseWords(string s) {
        int j = 0;
        s.insert(s.end(),' ');
        for(int i = 0; i<s.length(); i++)
        {
            if(s[i] == ' ')
            {
                reverse(s.begin()+j,s.begin()+i);
                j= i+1;
            }
        }
        s.pop_back();
        return s;
    }
};