class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int en = s.length() - 1;

        while (st < en) {
            while (st < en && !isalnum(s[st]))
                st++;

            while (st < en && !isalnum(s[en]))
                en--;

            if (tolower(s[st]) != tolower(s[en]))
                return false;

            st++;
            en--;
        }

        return true;
    }
};