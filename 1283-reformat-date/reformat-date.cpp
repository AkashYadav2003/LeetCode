class Solution {
public:
    string reformatDate(string date) {
        string day = "";
        string month = "";
        string year = "";
        string ans = "";
        int temp = 1;
        unordered_map<string,string> m;
        m["Jan"] = "01";
        m["Feb"] = "02";
        m["Mar"] = "03";
        m["Apr"] = "04";
        m["May"] = "05";
        m["Jun"] = "06";
        m["Jul"] = "07";
        m["Aug"] = "08";
        m["Sep"] = "09";
        m["Oct"] = "10";
        m["Nov"] = "11";
        m["Dec"] = "12";
        vector<string> days = {"01", "02", "03", "04", "05","06","07","08","09","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30", "31"};

        for(int i = 0; i<date.size(); i++){
            if(date[i] == ' '){
                temp++;
            }else if(temp == 1){
                day += date[i];
            }else if(temp == 2){
                month += date[i];
            }else if(temp == 3){
                year += date[i];
            }
        }
        day.pop_back();
        day.pop_back();
        ans += year;
        ans += '-';
        ans += m[month];
        ans += '-';
        int d = stoi(day);
        ans += days[d-1];

        return ans;
    }
};