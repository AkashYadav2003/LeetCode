class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int res = numBottles;
        int emptyWB = numBottles;

        while(emptyWB >= numExchange) {
            emptyWB = emptyWB - numExchange;
            numExchange += 1;
            res += 1;
            emptyWB += 1;
        }
        return res;
    }
};