class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0;
        int end=numbers.size()-1;
        while(start<end)
        {
            int a= numbers[start]+numbers[end];
            if(a==target) return{start+1,end+1};
            else if(a<target) start++;
            else end--;
        }
        return {};
    }
};
