class Solution {
public:
    char findTheDifference(string s, string t) {
        int sumS{}, sumT{};
        for (int i = 0; i < s.size(); i++) {
            sumS += s[i];
            sumT += t[i];
        }
        sumT += t[t.size() - 1];
        return (char)(sumT - sumS);
    }
};
