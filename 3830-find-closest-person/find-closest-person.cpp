class Solution {
public:
    int findClosest(int x, int y, int z) {
        int a;
        int b;
        if(z>x){
            a=z-x;
        }
        else{
            a=x-z;
        }
        if(z>y){
            b=z-y;
        }
        else{
            b=y-z;
        }
        
        if(a<b){
            return 1;
        }
        else if(b<a){
            return 2;
        }
        else{
            return 0;
        }
    }
};