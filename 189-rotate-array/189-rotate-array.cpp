class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k% size;
        int left = 0;
        int right = size-1;
        while(left <= right)
        {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
        left = 0;
        right = (k - 1)%size;
        while(left <= right)
        {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
        left = k%size;
        right = nums.size()-1;
        while(left <= right)
        {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }
};