class Solution {
public:
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area = 0;
        vector<vector<int>> visited(grid.size(), vector<int>(grid[0].size(), false));
        for(int i = 0; i<grid.size(); i++)
        {
            for(int j = 0; j<grid[0].size(); j++)
            {
                if(grid[i][j] == 1)
                {
                    area = max(area,fill(grid,i,j,visited));
                }
            }
        }
        return area;
    }
    
    int fill(vector<vector<int>>& grid, int i, int j, vector<vector<int>> &visited)
    {
        int area =0;
        int n = grid.size(),m = grid[0].size();
        if(visited[i][j] == false && grid[i][j] != 0)
        {
            area++;
            visited[i][j] = true;
            if(n > i+1)
                area += fill(grid,i+1,j,visited);
            if(m > j+1)
                area+=fill(grid,i,j+1,visited);
            if(i-1 >= 0)
                area+=fill(grid,i-1,j,visited);
            if(j-1 >= 0)
                area+=fill(grid,i,j-1,visited);
        }
        return area;
    }
};