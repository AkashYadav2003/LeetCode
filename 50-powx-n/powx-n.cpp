class Solution {
public:
    double myPow(double x, int n) {
        double res=1.0;
        long long y=n;
        if(y<0){
            x=1/x;
            y=-y;
        }
        while(y>0){
            if(y%2==1){
                res*=x;
            }
            x=x*x;
            y=y/2;
        }
        return res;
    }
};