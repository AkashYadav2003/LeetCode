class Solution {
public:
    bool isAnagram(string w1, string w2) {
        if (w1.length() != w2.length()) {
            return false;
        }
        sort(w1.begin(), w1.end());
        sort(w2.begin(), w2.end());

        return w1 == w2;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        int curr = 1;
        int prev = 0;
        vector<string> res;
        res.push_back(words[0]);
        for (int curr = 1; curr < words.size(); curr++) {
            if (!isAnagram(words[curr], words[prev])) {
                res.push_back(words[curr]);
                prev = curr;
            }
        }
        return res;
    }
};