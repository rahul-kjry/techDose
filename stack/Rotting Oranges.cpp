class Solution {
public:
    int maxX, maxY;
    bool hasRottenNeighbour(vector<vector<int>>& grid, int x, int y) {
        return (x && grid[y][x - 1] == 2) + (y && grid[y - 1][x] == 2) + (x < maxX && grid[y][x + 1] == 2) + (y < maxY && grid[y + 1][x] == 2);
    }
    int orangesRotting(vector<vector<int>>& grid) {
        maxY = grid.size() - 1, maxX = grid[0].size() - 1;
        int res = 0, freshCount;
        bool hasRotted;
        vector<pair<int, int>> toRot;
        do {
            freshCount = 0;
            hasRotted = false;
            toRot.clear();
            for (int y = 0; y <= maxY; y++) {
                for (int x = 0; x <= maxX; x++) {
                    if (grid[y][x] == 1) {
                        if (hasRottenNeighbour(grid, x, y)) {
                            toRot.push_back({x, y});
                            hasRotted = true;
                        }
                        else freshCount++;
                    }
                }
            }
            for (auto e: toRot) grid[e.second][e.first] = 2;
            res += hasRotted;
        } while (hasRotted);
        return freshCount ? -1 : res;
    }
};
