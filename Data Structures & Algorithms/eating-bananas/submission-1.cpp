class Solution {
public:
    bool find(vector<int>&piles,int mid,int h)
    {   int count=0;
        for(int i=0; i<piles.size(); i++)
        {
          count+=(piles[i]/mid);
          if(piles[i]%mid) count++;
        }
        if(count<=h) return true;
        else return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int start=1;
        int end=piles[piles.size()-1];
        int ans=INT_MAX;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(find(piles,mid,h))
            {
                ans=min(ans,mid);
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};
