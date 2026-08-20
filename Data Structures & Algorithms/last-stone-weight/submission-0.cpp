class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
      priority_queue<int>p;
      for(int x:stones) p.push(x);
      while(p.size()>1)
      {
         int x=p.top();
         p.pop();
         int y=p.top();
         p.pop();
         if(x<y) p.push(y-x);
         else if(x>y)p.push(x-y);
      }  
      if(p.size()==0) return 0;
      return p.top();
    }
};
