class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        if(n == 0){
            return {};
        }
        set<int> uniqueElements(arr.begin(),arr.end());
        unordered_map<int,int> mp;
        int rank = 1;
        for(const int &i: uniqueElements) {
            mp[i] = rank++;
        }
        vector<int> ans;
        for(int &i : arr){
            ans.push_back(mp[i]);
        }
        return ans;
    }
};