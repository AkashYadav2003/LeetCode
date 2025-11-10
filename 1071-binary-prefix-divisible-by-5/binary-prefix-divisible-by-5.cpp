class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int n = nums.size();
        int end = 0;
        vector<bool> res;
        for(int i = 0; i < n; ++i){
            end = (end * 2 + nums[i]) % 5;
            if(end == 0) {
                res.push_back(true);
            }
            else {
                res.push_back(false);
            }
        }
        return res;
    }
};