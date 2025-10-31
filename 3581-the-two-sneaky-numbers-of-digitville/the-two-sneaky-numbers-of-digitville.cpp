class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec;
        vector<int> cnt(n, 0);
        for (int i : nums) {
            cnt[i]++;
        }
        for (int i = 0; i < cnt.size(); i++) {
            if (cnt[i] == 2) {
                vec.push_back(i);
            }
        }
        return vec;
    }
};