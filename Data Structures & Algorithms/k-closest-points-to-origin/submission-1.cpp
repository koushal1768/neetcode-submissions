class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       priority_queue<pair<int,pair<int,int>>>pq;
       for(int i=0; i<points.size(); i++)
       {
        int a = points[i][0];
        int b = points[i][1];
        int dist = a*a+b*b;
        pq.push({dist,{a,b}});
        if(pq.size()>k) pq.pop();
       }
       vector<vector<int>>ans;
       while(k--)
       {
        auto pai=pq.top();
        pq.pop();
        ans.push_back({pai.second.first,pai.second.second});
       }
       return ans;
    }
};
