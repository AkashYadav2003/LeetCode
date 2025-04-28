//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    /*You are required to complete below function */
    string multiplyStrings(string& s1, string& s2) {
        // Your code here
        int sign=1;
        if(s1[0]=='-'){
            sign*=-1;
            s1=s1.substr(1);
        }
        if(s2[0]=='-'){
            sign*=-1;
            s2=s2.substr(1);
        }
        int n=s1.size();
        int m=s2.size();
        if(n==0||m==0){
            return "0";
        }
        vector<int> res(n+m,0);
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                res[i+j+1]+=(s1[i]-'0')*(s2[j]-'0');
            }
        }
        for(int i=n+m-1;i>0;i--){
            res[i-1]+=res[i]/10;
            res[i]%=10;
        }
        string ans;
        int i=0;
        while(i<res.size()&&res[i]==0){
            i++;
        }
        for(;i<res.size();i++){
            ans+=res[i]+'0';
        }
        if(ans.empty()){
            return "0";
        }
        return sign==-1?"-"+ans:ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string a;
        string b;
        cin >> a >> b;
        Solution obj;
        cout << obj.multiplyStrings(a, b) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends