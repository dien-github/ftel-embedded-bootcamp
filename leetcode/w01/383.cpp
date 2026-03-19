class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int table[26]{0};
        for (char c : magazine) {
            table[c - 'a']++;
        }
        for (char c : ransomNote) {
            if (table[c - 'a'] == 0) {
                return false;
            }
            table[c - 'a']--;
        }
        return true;
    }
};
