class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        int temp;
        while(left<=right)
        {
            temp = numbers[left] + numbers[right];
            if(temp == target) break;
            else if(temp < target) left++;
            else right--;
        }
        left++;
        right++;
        return {left,right};
    }
};