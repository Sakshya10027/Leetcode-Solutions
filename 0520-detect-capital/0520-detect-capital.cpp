class Solution {
public:
    bool detectCapitalUse(string word) {
        int upperCase = 0;

        for (int i = 0; i < word.length(); i++) {
            if (isupper(word[i])) {
                upperCase++;
            }
        }
        return upperCase == word.length()
            || upperCase == 0
            || (upperCase == 1 && isupper(word[0]));
    }
};