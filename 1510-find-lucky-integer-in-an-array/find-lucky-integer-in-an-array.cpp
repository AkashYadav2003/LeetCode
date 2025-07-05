class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        int maxi = -1;
        for(auto i: arr) {
            mp[i]++;
        }
        for (const auto i: mp){
            if(i.first == i.second) {
                maxi = max(maxi, i.first);
            }
        }
        return maxi;
    }
};