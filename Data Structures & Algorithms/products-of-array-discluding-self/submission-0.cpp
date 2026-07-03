class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>s(n,0);
        vector<int>p(n,0);
        p[0]=1;
        s[n-1]=1;
        
        for(int i=1; i<n; i++)
        {
          p[i]=p[i-1]*nums[i-1];
        }
        for(int i=n-2; i>=0; i--)
        {
          s[i]=s[i+1]*nums[i+1];
        }
       vector<int>ans(n,0);
       for(int i=1; i<n-1; i++)
       { 
         ans[i]=s[i]*p[i];
       }
       ans[0]=s[0];
       ans[n-1]=p[n-1];
       return ans;
    }
};
