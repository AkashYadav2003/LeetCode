class Solution {
public:
    int countLargestGroup(int n) {
        vector<int>freq(1000,0);
        int maxSize=0;
        for (int i= 1;i<=n;i++){
            int temp=i;
            int sum=0;
            while(temp>0) {
                sum+=temp%10;
                temp/=10;
            }
            maxSize=max(maxSize,++freq[sum]);
        }
        int count=0;
        for(const auto& i:freq){
            if(i==maxSize){
                count++;
            }
        }
        return count;
    }
};