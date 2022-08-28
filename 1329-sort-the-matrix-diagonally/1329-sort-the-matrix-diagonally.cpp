class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        unordered_map<int,priority_queue<int>> values;
        for(int i = 0; i<m;i++)
        {
            for(int j = 0; j<n;j++)
            {
                values[i-j].push(-mat[i][j]);
            }
        }
        for(int i = 0; i<m;i++)
        {
            for(int j = 0; j<n;j++)
            {
                mat[i][j] = -values[i-j].top();
                values[i-j].pop();
            }
        }
        return mat;
    }
};