class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int isLandsCount = 0;
        queue<pair<int, int>> que;
        int offSet[5] = {-1, 0, 1, 0, -1};
        for (int row = 0; row < grid.size(); ++row) {
            for (int col = 0; col < grid[0].size(); ++col) {
                if (grid[row][col] == '1') {
                    ++ isLandsCount;
                    grid[row][col] = '0';
                    que.push({row, col});
                    while (not que.empty()) {
                        auto [p1, p2] = que.front();
                        que.pop();
                        for (int i = 0; i < 4; ++ i) {
                            int x = p1 + offSet[i], y = p2 +offSet[i+1];
                            if (x >= 0 and x < grid.size() and y >= 0 and y < grid[0].size() and grid[x][y] == '1') {
                                que.push({x, y});
                                grid[x][y] = '0';
                            }
                        }
                    }
                }
            } 
        }
        return isLandsCount;
    }
};