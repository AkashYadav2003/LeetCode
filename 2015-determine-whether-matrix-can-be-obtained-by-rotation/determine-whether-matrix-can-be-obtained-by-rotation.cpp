class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        bool status1 = true;
        bool status2 = true;
        bool status3 = true;
        bool status4 = true;
        for ( int i = 0 ; i < n ; i ++ ){
            for ( int j = 0 ; j < n ; j ++ ){
                if ( !status1 || mat[i][j] != target[i][j] ) status1 = false;
                if ( !status2 || mat[n-1-i][n-1-j] != target[i][j] ) status2 = false;
                if ( !status3 || mat[n-j-1][i] != target[i][j] ) status3 = false;
                if ( !status4 || mat[j][n-i-1] != target[i][j] ) status4 = false;
                if ( !status1 && !status2 && !status3 && !status4 ) return false;
            }
        }
        return true;
    }
};