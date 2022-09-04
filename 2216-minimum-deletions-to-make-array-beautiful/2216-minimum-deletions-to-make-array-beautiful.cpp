class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int ans = 0, n  = nums.size();
        for(int i = 0; i < n-1; i++) if(nums[i]==nums[i+1] && (i-ans)%2==0) ans++;
        return ans+(n-ans)%2;
    }
};