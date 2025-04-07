class Solution {
public:
    vector<vector<int>>dp;
    bool solve(vector<int>&nums,int n, int pos,int sum){
        if(sum==0){
            return true;
        }
        else if(pos>=n || sum<0){
            return false;
        }
        if(dp[pos][sum]!=-1){
            return dp[pos][sum];
        }
        return dp[pos][sum]=solve(nums,n,pos+1,sum-nums[pos]) || solve(nums,n,pos+1,sum);
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        dp.clear();
        dp.resize(n+1,vector<int>(sum/2+1,-1));
        return solve(nums,n,0,sum/2);
    }
};