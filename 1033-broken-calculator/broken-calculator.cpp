class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int cnt = 0;
        while (target > startValue) {
            if (target % 2 == 0) {
                target /= 2;
                cnt++;
            }
            else {
                target++;
                cnt++;
            }
            if (startValue == target) {
                return cnt;
            }
        }
        return cnt + (startValue - target);
    }
};