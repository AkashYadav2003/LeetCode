class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        int res = numBottles;
        int emptyWB = numBottles;

        while (emptyWB >= numExchange) {
            int newWB = emptyWB / numExchange;
            res += newWB;
            emptyWB = newWB + (emptyWB % numExchange);
        }
        return res;
    }
}