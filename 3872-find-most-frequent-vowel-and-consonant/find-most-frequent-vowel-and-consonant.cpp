class Solution {
public:
    int maxFreqSum(string s) {
        int vMax = 0;
        int cMax = 0;
        unordered_map<char, int> mp;
        for(char c : s) {
            mp[c]++;
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vMax = max(vMax, mp[c]);
            }
            else {
                cMax = max(cMax, mp[c]);
            }
        }
        return vMax + cMax;
    }
};