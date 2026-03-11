class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        int binaryComp=0;
        int bitPos=0;
        while(n>0){
            int bit=n%2;
            int flippedBit=1-bit;
            binaryComp+=flippedBit*pow(2,bitPos);
            n/=2;
            bitPos++;
        }
        return binaryComp;
    }
};