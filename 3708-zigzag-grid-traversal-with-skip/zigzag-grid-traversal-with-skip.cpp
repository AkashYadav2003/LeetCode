class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> ans;
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;

        for(int row = 0; row < n; row++) {
            if(row % 2 == 0) {
                for (int col = 0; col < m; col++) {
                    if (cnt % 2 == 0) {
                        ans.push_back(grid[row][col]);
                    }
                    cnt++;
                }
            }
            else {
                for (int col = m - 1; col >= 0; col--) {
                    if (cnt % 2 == 0) {
                        ans.push_back(grid[row][col]);
                    }
                    cnt++;
                }
            }
        }
        return ans;
    }
};