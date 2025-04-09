class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        int mini=*min_element(nums.begin(),nums.end());
        if(mini<k){
            return -1;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]>k){
                cnt++;
                while(i+1<n && nums[i]==nums[i+1]){
                    i++;
                }
            }
        }
        return cnt;
    }
};