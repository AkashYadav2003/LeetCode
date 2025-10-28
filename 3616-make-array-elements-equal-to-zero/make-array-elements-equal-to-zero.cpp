int check(int curr, int direction, vector<int> nums) { 
    int n = nums.size();
    while(curr>=0&&curr<n){
        if (nums[curr]==0){
            curr+=direction;
        }else if(nums[curr]>0){
            nums[curr]--;
            direction=-direction; 
            curr+=direction;
        }
    }
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            return -1;
        }
    }
    return 1;
}

class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        vector<int>store;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                store.push_back(i);
            }
        }
        for(int i=0;i<store.size();i++){
            if(check(store[i],-1,nums)==1){
                cnt++;
            }
            if(check(store[i],1,nums)==1){
                cnt++;
            }            
        }
        return cnt;
    }
};