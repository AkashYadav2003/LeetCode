class Solution {
public:
    int encrypt(int num){
        int numDig=0;
        int maxi=0;
        int temp=num;
        while(temp>0){
            int dig=temp%10;
            if(dig>maxi){
                maxi=dig;
            }
            numDig++;
            temp/=10;
        }
        int encNum=0;
        for(int i=0;i<numDig;i++){
            encNum=encNum*10+maxi;
        }
        return encNum;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(auto i:nums){
            sum+=encrypt(i);
        }
        return sum;
    }
};