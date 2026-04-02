class Solution {
public:
    string makeGood(string& s) {
        char i = 0;
        while (i < s.size()) {
            if (s[i] - s[i + 1] == 32 || s[i] - s[i + 1] == -32) {
                s.erase(i, 2);
                i = 0;
                continue;
            }
            i++;
        }
        return s;
    }
};
