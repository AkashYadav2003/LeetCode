class Solution {
public:
    long long calculateScore(vector<string>& instructions, vector<int>& values) {
        int m = instructions.size();
        int n = values.size();
        long long score = 0;
        vector<int> visited(m , 0);
        int i = 0;
        while(i >= 0 && i < m && visited[i] == 0) {
            visited[i] = 1;
            if(instructions[i] == "add") {
                score += values[i];
                i++;
            }
            else {
                i = i + values[i];
            }
        }
        return score;
    }
};