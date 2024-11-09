class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat.size();j++)
            {
                if(i==j)
                {
                    s+=mat[i][j];
                }
                else if(i+j==mat.size()-1)
                {
                    s+=mat[i][j];
                }
            }
        }
        return s;
    }
};
