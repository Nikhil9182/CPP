class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int water = 0;
        while(left <= right)
        {
            water = max(water,(right-left) * min(height[left],height[right]));
            (height[left] < height[right])?left++:right--;
        }
        return water;
    }
};