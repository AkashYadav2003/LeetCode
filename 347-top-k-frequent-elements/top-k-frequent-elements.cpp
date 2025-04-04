class Solution {
public:
    static bool comp(const pair<int,int>&a,const pair<int,int>&b){
        return b.second<a.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end()){
                mp[nums[i]]=1;
            }  
            else{
                mp[nums[i]]++;
            }
        }
        vector<pair<int,int>>v;
        for(auto i:mp){
            v.push_back(i);
        }
        sort(v.begin(),v.end(),comp);
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};