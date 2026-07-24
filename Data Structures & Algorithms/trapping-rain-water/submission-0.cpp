class Solution {
public:
    int trap(vector<int>& nums) {
        int start=0; 
        int n=nums.size();
        if(n==0) return 0;
        int ans=0;
        int left=0,right=n-1;
        int left_max=0,right_max=0;
        while(left<right)
        {
            if(nums[left]<nums[right])
            {
                left_max=max(left_max,nums[left]);
                ans+=left_max-nums[left];
                left++;
            }
            else{
                right_max=max(right_max,nums[right]);
                ans+=right_max-nums[right];
                right--;
            }
        }
        return ans;
    }
};
