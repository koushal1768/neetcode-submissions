class Solution {
public:

    int binarysearch(vector<int>&nums,int target,int l,int r)
    {
        while(l<=r)
        {
            int m=(r+l)/2;
            if(nums[m]==target) return m;
            else if(nums[m]>target)r=m-1;
            else l=m+1;

        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
       while(l<r)
       {
        int m=(l+r)/2;
        if(nums[m] > nums[r]) l=m+1;
        else r=m;
       }
       int pivot = l;
       int result=binarysearch(nums,target,0,pivot-1);
       if(result!=-1) return result;

       return binarysearch(nums,target,pivot,nums.size()-1);

    }
};
