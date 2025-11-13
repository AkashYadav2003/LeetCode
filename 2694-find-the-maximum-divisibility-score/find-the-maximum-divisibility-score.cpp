class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int count = 0;
        vector<int> store;
        for (int i = 0; i < divisors.size(); i++) {
            count = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] % divisors[i] == 0) {
                    count += 1;
                }
            }
            store.push_back(count);
        }
        int maxi = INT_MIN;
        for (int i = 0; i < store.size(); i++) {
            if (maxi < store[i]) {
                maxi = store[i];
            }
        }
        vector<int> divisor;
        for (int j = 0; j < store.size(); j++) {
            if (store[j] == maxi) {
                divisor.push_back(divisors[j]);
            }
        }
        if (divisor.size() == 1) {
            return divisor[0];
        }
        int mini = INT_MAX;
        for (int i = 0; i < divisor.size(); i++) {
            if (mini > divisor[i]) {
                mini = divisor[i];
            }
        }
        return mini;
    }
};