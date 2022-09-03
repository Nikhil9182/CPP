class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set s(nums.begin(),nums.end());
        nums.assign(s.begin(),s.end());
        sort(nums.begin(),nums.end());
        return nums.size();
        
    }
};