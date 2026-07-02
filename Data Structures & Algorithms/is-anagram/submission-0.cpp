class Solution {
public:
    bool isAnagram(string s, string t) {
        if(t.size()!=s.size()) return false;
       vector<int>v(26,0);
       vector<int>v2(26,0);
       for(int i=0; i<t.size(); i++)
       {
         v[s[i]-'a']++;
         v2[t[i]-'a']++;
       }
       for(int i=0; i<26; i++)
       {
        if(v[i]!=v2[i])return false;
       }
       return true;
    }
};
