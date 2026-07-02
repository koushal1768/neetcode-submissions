class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(int i=0; i<strs.size(); i++)
        {
            string s= strs[i];
            string k= strs[i];
            sort(k.begin(),k.end());
            mp[k].push_back(s);
        }
        
        for(auto[key,value] : mp)
        {
            ans.push_back(value);
        }
return ans;
      
    }
};
