class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>arr(n, 0);
        // int i = 0;
        // int ele = 1;
        // while ( i + 1 < n) {
        //     arr[i] = ele;
        //     arr[i + 1] = - ele;
        //     ele++;
        //     i = i + 2;
        // }
        // return arr;
        int i = 0;
        int j = n - 1;
        int ele = 1;
        while (i < j) {
            arr[i] = ele;
            i++;
            arr[j] = - ele;
            j--;
            ele++;
        }
        return arr;
    }
};