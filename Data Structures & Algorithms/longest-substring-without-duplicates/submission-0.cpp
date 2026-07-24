class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int n=s.length();
     if(n==0||n==1) return n;
     int start=0,end=0;
     vector<int>ch(128,0);
     int ans=0;
     while(end<n)
     {  ch[s[end]]++;
       if(ch[s[end]]>1)
       { 
         while(ch[s[end]] > 1)
         {
            ch[s[start]]--;
            start++;
         }
       }
        ans=max(ans,end-start+1);
        end++;
     }
     return ans;
    }
};
