class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0;
        int right = 0;
        bool isDel = false;
        int ans = 0;
        while (right < nums.size()) {
            int num = nums[right];
            if (num == 1) {
                ans = isDel ? max(ans, right - left) : max(ans, right - left + 1);
            }
            else {
                if (isDel) {
                    while (nums[left] == 1) {
                        left += 1;
                    }
                    left += 1;
                }
                else {
                    isDel = true;
                }
            }
            right += 1;
        }
        return isDel ? ans : ans - 1;
    }
};