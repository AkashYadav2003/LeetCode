class Solution {
public:
    string winningPlayer(int x, int y) {
        int cnt = 0;
        while(x >= 1 && y >= 4) {
            x -= 1;
            y -= 4;
            cnt++;
        }
        return (cnt % 2 == 1) ? "Alice" : "Bob";
    }
};