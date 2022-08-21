class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int count = 0;
        while(i < nums.size())
        {
            if(nums[i] == 0) 
            {
                count++;
                i++;
            }
            else
            {
                int temp = nums[i - count];
                nums[i - count] = nums[i];
                nums[i] = temp;
                i++;
            }
        }
    }
};