class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;

        for(int i=0;i<n-2;i++){
            for(int j=0;j<m-2;j++){
                unordered_set<int> s;
                int sum=grid[i][j]+grid[i][j+1]+grid[i][j+2];

                bool isMagicRow=true;
                for(int k=0;k<3;k++){
                    int rowSum=grid[i+k][j]+grid[i+k][j+1]+grid[i+k][j+2];
                    if(rowSum!=sum){
                        isMagicRow=false;
                        break;
                    }
                }
                if(!isMagicRow){
                    continue;
                }
                bool isMagicCol=true;
                for(int k=0;k<3;k++){
                    int colSum=grid[i][j+k] + grid[i+1][j+k] + grid[i+2][j+k];
                    if(colSum!=sum){
                        isMagicCol=false;
                        break;
                    }
                }
                if(!isMagicCol){
                    continue;
                }

                int sumDiagonal1=grid[i][j]+grid[i+1][j+1]+grid[i+2][j+2];
                int sumDiagonal2=grid[i][j+2]+grid[i+1][j+1]+grid[i+2][j];
                if(sumDiagonal1!=sum || sumDiagonal2!=sum){
                    continue;
                }
                for(int k=0;k<3;k++){
                    for(int l=0;l<3;l++){
                        int val=grid[i+k][j+l];
                        if(val>=1 && val<=9){
                            s.insert(val);
                        }
                    }
                }
                if(s.size()==9){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};