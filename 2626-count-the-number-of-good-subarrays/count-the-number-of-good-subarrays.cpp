class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long n=nums.size();
        long long l=0;
        long long r=0;
        long long good=0;
        unordered_map<long long, long long>mp;
        long long eqPair=0;
        while(l<n){
            while(r<n && eqPair<k){
                mp[nums[r]]++;
                if(mp[nums[r]]>=2){
                    eqPair+=mp[nums[r]]-1;
                }
                r++;
            }
            if(eqPair>=k){
                good+=n-r+1;
            }
            mp[nums[l]]--;
            if(mp[nums[l]]>0){
                eqPair-=mp[nums[l]];
            }
            l++;
        }
        return good;
    }
};