//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxPartitions(string &s) {
        // code here
        int n=s.length();
        vector<int>v(26,-1);
        for(int i=0;i<n;i++){
            v[s[i]-'a']=i;
        }
        int cnt=0;
        int curr=-1;
        for(int i=0;i<n;i++){
            curr=max(curr,v[s[i]-'a']);
            if(curr==i){
                cnt++;
                curr=-1;
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;

    for (int i = 0; i < tc; ++i) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.maxPartitions(s) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends