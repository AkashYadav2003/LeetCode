class Solution {
public:
    int MOD=1e9+7;
    long long solve(long long a, long long b){
        long long res=1;
        while(b>0){
            if(b%2==1){
                res=(res*a)%MOD;
            }
            a=(a*a)%MOD;
            b=(b/2);
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        return (solve(4,n/2) * solve(5,n-n/2))%MOD;
    }
};