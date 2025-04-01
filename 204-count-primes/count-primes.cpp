class Solution {
public:
    int countPrimes(int n) {
        int cnt=0;
        vector<int>v(n+1);
        if(n==0 || n==1){
            return 0;
        }
        for(int i=2;i<n;i++){
            v[i]=1;
        }
        for(int i=2;i*i<=n;i++){
            if(v[i]==1){
                for(int j=i*i;j<n;j+=i){
                    v[j]=0;
                }
            }
        }
        for(int i=2;i<=n;i++){
            if(v[i]==1){
                cnt++;
            }
        }
        return cnt;
    }
};