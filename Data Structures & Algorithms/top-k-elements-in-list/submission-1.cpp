class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int n:nums)
        {
            mp[n]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto[key,value]:mp)
        {
            pq.push({value,key});
        }
        vector<int>ans;
        while(k--)
        {
            pair<int,int> t = pq.top();
            pq.pop();
            ans.push_back(t.second);
        }
        return ans;
    }
};
