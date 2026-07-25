class Solution {
public:
    int characterReplacement(string s, int k) {
       vector<int>count(26,0);
       int left=0;
       int max_fre=0;
       int maxlen=0;
       for(int right=0; right<s.length(); right++)
       {
         count[s[right]-'A']++;
         max_fre=max(max_fre,count[s[right]-'A']);
         int window=right-left+1;
         if(window-max_fre > k)
         {
            count[s[left]-'A']--;
            left++;
         }
         maxlen=max(maxlen,right-left+1);
       }
       return maxlen;
    }
};
