#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &mat)
    {
        if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && mat[x][y] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void solve(vector<vector<int>> &mat, int n, vector<string> &ans, int x, int y, vector<vector<int>> visited, string path)
    {

        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }

        visited[x][y] = 1;
        // 4choices - D,L , R , U

        // down
        int newx = x + 1;
        int newy = y;
        if (isSafe(newx, newy, n, visited, mat))
        {
            path.push_back('D');
            solve(mat, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // left
        newx = x;
        newy = y - 1;
        if (isSafe(newx, newy, n, visited, mat))
        {
            path.push_back('L');
            solve(mat, n, ans, newx, newy, visited, path);
            path.pop_back();
        }
        // right
        newx = x;
        newy = y + 1;
        if (isSafe(newx, newy, n, visited, mat))
        {
            path.push_back('R');
            solve(mat, n, ans, newx, newy, visited, path);
            path.pop_back();
        }
        // up
        newx = x - 1;
        newy = y;
        if (isSafe(newx, newy, n, visited, mat))
        {
            path.push_back('U');
            solve(mat, n, ans, newx, newy, visited, path);
            path.pop_back();
        }
        visited[x][y] = 0;
    }

public:
    vector<string> findPath(vector<vector<int>> &mat)
    {
        // code here
        vector<string> ans;

        if (mat[0][0] == 0)
        {
            return ans;
        }
        int n = mat.size();

        int srcx = 0;
        int srcy = 0;

        vector<vector<int>> visited = mat;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }
        string path = "";
        solve(mat, n, ans, srcx, srcy, visited, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};