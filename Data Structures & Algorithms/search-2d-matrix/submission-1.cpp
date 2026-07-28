class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int l=0;
    int r=matrix.size()*matrix[0].size();
    r-=1;
    while(l<=r)
    {
        int m=l+(r-l)/2;
        int ro=m/matrix[0].size();
        int c=m%matrix[0].size();
        if(matrix[ro][c]==target) return true;
        else if(matrix[ro][c]<target) l=m+1;
        else r=m-1;
    }
    return false;
    }
};
