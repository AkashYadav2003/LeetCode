class Solution {
public:
    int averageValue(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int cnt = 0;
        int avg = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0 && nums[i] % 3 == 0) {
                sum += nums[i];
                cnt++;
                avg = sum / cnt;
            }
        }
        if (cnt = 0) {
            return 0;
        }
        return avg;
    }
};