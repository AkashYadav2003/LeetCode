class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
        vector<int>res(n);
        for (int i = n - 1; i >= 0; i--) {
            int cnt = i + k;
            if (cnt >= n) {
                res[i] = energy[i];
            }
            else {
                res[i] = energy[i] + res[cnt];
            }
        }
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, res[i]);
        }
        return maxi;
    }
};