//Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

//An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

 




class Solution {

    void mark_current_island(vector<vector<char>>& grid, int x  ,int y , int r , int c)
    {
        if(x<0 || x>=r || y<0 || y>=c || grid[x][y] != '1')
         return;

         grid[x][y] = '2';

         mark_current_island(grid,x+1,y,r,c);
         mark_current_island(grid,x,y+1,r,c);
         mark_current_island(grid,x-1,y,r,c);
         mark_current_island(grid,x,y-1,r,c);

    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        if(rows == 0) 
        {
          return 0 ;
        }

        int cols = grid[0].size();
        int islands = 0;
        for(int i = 0 ; i<rows ; i++)
        {
            for(int j = 0 ; j<cols ; j++)
            {
                if (grid[i][j] == '1') 
                {
                    mark_current_island(grid,i,j,rows,cols);
                    islands+=1;
                }
            }
        }
        return islands;

    }
};