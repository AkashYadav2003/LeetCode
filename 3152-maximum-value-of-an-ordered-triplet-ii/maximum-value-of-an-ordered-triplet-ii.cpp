class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        if(n<3){
            return 0;
        }
        vector<int>lMax(n,-1);
        vector<int>rMax(n,-1);
        int maxi=nums[0];
        lMax[0]=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>maxi){
                maxi=nums[i-1];
                lMax[i]=i-1;
            }
            else{
                lMax[i]=lMax[i-1];
            }
        }
        int rMaxi=nums[n-1];
        rMax[n-1]=n-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i+1]>rMaxi){
                rMaxi=nums[i+1];
                rMax[i]=i+1;
            }
            else{
                rMax[i]=rMax[i+1];
            }
        }
        long long ans=0;
        for(int i=1;i<n-1;i++){  
            if(lMax[i]==-1 || rMax[i]==-1){
                continue;
            }
            int leftMax=nums[lMax[i]];
            int rightMax=nums[rMax[i]];
            ans=max(ans,(long long)(leftMax - nums[i])*rightMax);
        }
        if(ans<0){
            return -1;
        }
        return ans;
    }
};