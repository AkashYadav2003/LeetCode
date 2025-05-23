//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        int maxi=arr[0];
        int secMax=-1;
        for(int i=1;i<n;i++){
            if(arr[i]>maxi){
                maxi=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>secMax && arr[i]!=maxi){
                secMax=arr[i];
            }
        }
        return secMax;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends