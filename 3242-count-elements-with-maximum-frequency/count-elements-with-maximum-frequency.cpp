class Solution {
    public:
        int maxFrequencyElements(vector<int>& nums) {
            unordered_map<int, int> freq;
            int maxFreq = 0;
            int n = nums.size();
            for (int i = 0; i < n; ++i) {
                freq[nums[i]]++;
                maxFreq = max(maxFreq, freq[nums[i]]);
            }
            int count = 0;
            for (auto &[num,f]:freq) {
                if (f == maxFreq) {
                    count += f;
                }
            }
            return count;
    }
};



       

