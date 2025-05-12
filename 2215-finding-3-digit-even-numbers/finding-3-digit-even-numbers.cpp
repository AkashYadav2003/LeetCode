class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int>st;
        int n=digits.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if((i!=j) && (j!=k) && (i!=k)){
                        if(digits[i]!=0 && digits[k]%2==0){
                            string str="";
                            str.push_back(digits[i]+'0');
                            str.push_back(digits[j]+'0');
                            str.push_back(digits[k]+'0');
                            st.insert(stoi(str));
                        }
                    }
                }
            }
        }
        vector<int>ans(st.begin(),st.end());
        return ans;
    }
};