class Solution {
public:
    int winner(vector<int> &nums, int left, int right, int n) {
        if (left == right) {
            return nums[left];
        }
        int scoreL = nums[left] - winner(nums, left + 1, right, n);
        int scoreR = nums[right] - winner(nums, left, right - 1, n);

        return max(scoreL, scoreR);
    }
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        return winner(nums, 0, n - 1,n) >= 0;
    }
};