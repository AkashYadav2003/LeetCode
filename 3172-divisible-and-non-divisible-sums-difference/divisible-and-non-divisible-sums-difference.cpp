class Solution {
public:
    int differenceOfSums(int n, int m) {
        int diff=0;
        vector<int>div;
        vector<int>notDiv;
        for(int i=1;i<=n;i++){
            if(i%m!=0){
                notDiv.push_back(i);
            }
        }
        int num1=0;
        for(int i=0;i<notDiv.size();i++){
            num1+=notDiv[i];
        }
        for(int i=1;i<=n;i++){
            if(i%m==0){
                div.push_back(i);
            }
        }
        int num2=0;
        for(int i=0;i<div.size();i++){
            num2+=div[i];
        }
        diff=num1-num2;
        return diff;
    }
};