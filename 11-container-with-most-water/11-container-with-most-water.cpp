class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int water = 0;
        while(left <= right)
        {
            int sum = (right-left) * min(height[left],height[right]);
            water = max(water,sum);
            if(height[left] < height[right])
                left++;
            else
                right--;
        }
        return water;
    }
};