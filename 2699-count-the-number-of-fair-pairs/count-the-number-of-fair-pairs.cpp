class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        long long ans=0;
        for(int i=0;i<n;i++){
            int low=i+1;
            int high=n-1;
            int l=0;
            int r=0; 
            while(low<=high){
                int mid=low+(high-low)/2;
                long long sum=nums[i]+nums[mid];
                if(lower<=sum && sum<=upper){
                    low=mid+1;
                    r=mid;
                }
                else if(sum>upper){
                    high=mid-1;
                }
                else if(sum<lower){
                    low=mid+1;
                }
            }
            low=i+1;
            high=n-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                int sum=nums[i]+nums[mid];
                if(lower<=sum && sum<=upper){
                    high=mid-1;
                    l=mid;
                }
                else if(sum<lower){
                    low = mid+1;
                }
                else if(sum>upper){
                    high = mid-1;
                }
            }
            ans+=(r!=0 && l!=0) ? (r-l)+1 : 0;
        }
        return ans;
    }
};