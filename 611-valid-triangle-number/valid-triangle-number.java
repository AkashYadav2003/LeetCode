class Solution {
    public int triangleNumber(int[] nums) {
        Arrays.sort(nums);
        int cnt = 0;
        int n = nums.length;
        for (int i = n - 1; i >= 2; i--) {
            int left = 0;
            int right = i - 1;
            while (left < right) {
                if (nums[left] + nums[right] > nums[i]) {
                    cnt += right - left;
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return cnt;
    }
}