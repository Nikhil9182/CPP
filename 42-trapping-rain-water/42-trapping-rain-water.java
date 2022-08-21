class Solution {
    public int trap(int[] height) {
        if (height == null || height.length < 3) return 0;
        int ans = 0;
        int[] dp = new int[height.length];
        dp[0] = height[0];
        for (int i = 1; i < height.length; i++) {
            dp[i] = Math.max(dp[i - 1], height[i]);
        }

        int maxHeightFromRight = height[height.length - 1];
        for (int i = height.length - 2; i > 0; i--) {
            ans += Math.max(Math.min(maxHeightFromRight, dp[i - 1]) - height[i], 0);
            maxHeightFromRight = Math.max(maxHeightFromRight, height[i]);
        }
        return ans;
    }
}