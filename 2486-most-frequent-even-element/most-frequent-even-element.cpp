class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size();
        int num=-1;
        int maxi=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                mp[nums[i]]++;
            }
        }
        for(auto i:mp){
            if(i.second>maxi || (i.second==maxi && i.first<num)){
                maxi=i.second;
                num=i.first;
            }
        }
        if(num==-1){
            return -1;
        }
        return num;
    }
};