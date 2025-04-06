class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int cnt=1;
        int inc=1;
        int dec=1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                inc++;
                cnt=max(cnt,inc);
                dec=1;
            }
            else if(nums[i]<nums[i-1]){
                dec++;
                cnt=max(cnt,dec);
                inc=1;
            }
            else{
                inc=1;
                dec=1;
            }
        }
        return cnt;
    }
};