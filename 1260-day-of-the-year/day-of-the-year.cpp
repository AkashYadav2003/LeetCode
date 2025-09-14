class Solution {
public:
    int dayOfYear(string date) {
        vector<int> non_leapYear{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        vector<int> leapYear{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int years = stoi(date.substr(0, 4));
        int mounths = stoi(date.substr(5, 2));
        int dates = stoi(date.substr(8, 2));

        int sum1 = 0;
        if (years % 4 == 0 and years != 1900) {
            for (int i = 0; i < mounths - 1; ++i) {
                sum1 += leapYear[i];
            }

            return dates + sum1;
        }

        int sum2 = 0;
        for (int i = 0; i < mounths - 1; ++i) {
            sum2 += non_leapYear[i];
        }
        return dates + sum2;
    }
};