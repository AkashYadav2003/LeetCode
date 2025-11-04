class Solution {
public:
    int calculateXSum(const vector<int>& subarray, int x) {
        unordered_map<int,int>mp;
        for(int i:subarray){
            mp[i]++;
        }
        vector<pair<int, int>>vec;
        for (const auto& i:mp) {
            vec.emplace_back(i.second,i.first);
        }
        sort(vec.begin(),vec.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            if(a.first==b.first){
                return a.second>b.second;
            }
            else{
                return a.first>b.first;
            }
        });
        
        int sum=0;
        int cnt=min(x,(int)vec.size());
        for(int i=0;i<cnt;i++){
            sum+=vec[i].first*vec[i].second;
        }
        return sum;
    }
    
    vector<int> findXSum(vector<int>& nums,int k,int x){
        int n=nums.size();
        vector<int>ans(n-k+1);
        for(int i=0;i<=n-k;i++){
            vector<int>subarray(nums.begin()+i,nums.begin()+i+k);
            ans[i]=calculateXSum(subarray, x);
        }
    
        return ans;
    }
};