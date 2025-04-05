class Solution {
public:
    void solve(vector<int>& nums,int& xorSum,int idx,int& sum){
        if(idx==nums.size()){
            sum=sum+xorSum;
            return;
        }
        xorSum=xorSum^nums[idx];
        solve(nums,xorSum,idx+1,sum);
        xorSum=xorSum^nums[idx];
        solve(nums,xorSum,idx+1,sum);
    }
    int subsetXORSum(vector<int>& nums) {
        int sum=0;
        int xorSum=0;
        int idx=0;
        solve(nums,xorSum,idx,sum);
        return sum;
    }
};