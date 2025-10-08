class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        int n = spells.size();
        int m = potions.size();
        vector<int> res(n);

        for (int i = 0; i < n; i++) {
            int s = spells[i];
            int left = 0;
            int right = m - 1;
            while (left <= right) {
                int mid = (left + right) / 2;
                long product = (long) potions[mid] * s;
                if (product >= success) {
                    right = mid - 1;
                }
                else {
                    left = mid + 1;
                }
            }
            res[i] = m - left;
        }
        return res;
    }
};