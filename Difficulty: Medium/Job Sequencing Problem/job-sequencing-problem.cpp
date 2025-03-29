//{ Driver Code Starts
// Driver code
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    static bool comp(const pair<int,int>&a,const pair<int,int>&b){
        return a.second>b.second;
    }
    vector<int>jobSequencing(vector<int>&deadline,vector<int>&profit){
        int n=deadline.size();
        vector<pair<int,int>>v(n);
        int dMax=INT_MIN;
        for (int i=0;i<n;i++) {
            v[i]={deadline[i],profit[i]};
            dMax=max(dMax,deadline[i]);
        }
        sort(v.begin(),v.end(),comp);
        set<int>st;
        for(int i=1;i<=dMax;i++){
            st.insert(i);
        }
        int pro=0;
        int cnt=0;
        for(auto i:v){
            auto it=st.upper_bound(i.first);
            if(it!=st.begin()){
                it--;
                pro+=i.second;
                cnt++;
                st.erase(it);
            }
        }
        return {cnt,pro};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> deadlines, profits;
        string temp;
        getline(cin, temp);
        int x;
        istringstream ss1(temp);
        while (ss1 >> x)
            deadlines.push_back(x);

        getline(cin, temp);
        istringstream ss2(temp);
        while (ss2 >> x)
            profits.push_back(x);

        Solution obj;
        vector<int> ans = obj.jobSequencing(deadlines, profits);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends