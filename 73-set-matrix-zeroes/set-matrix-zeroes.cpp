class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> markRow(m, 0);
        vector<int> markCol(n, 0);
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == 0) {
                    markRow[i] = 1;
                    markCol[j] = 1;
                }
            }
        }
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(markRow[i] == 1 || markCol[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};