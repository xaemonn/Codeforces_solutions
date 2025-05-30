#include <bits/stdc++.h>
using namespace std;



vector<int> x = {1, -1, 0, 0};
vector<int> y = {0, 0, 1, -1};
vector<char> dir = {'D', 'U', 'R', 'L'};

int n, m;
vector<vector<char>> grid;
vector<vector<int>> vis;
vector<vector<pair<int, int>>> par;
bool valid(int x, int y)
{
    return x >= 0 && y >= 0 && x < n && y < m && grid[x][y] != '#' && !vis[x][y];
}

void solve()
{

    cin >> n >> m;
    grid.assign(n, vector<char>(m));
    vis.assign(n, vector<int>(m, 0));
    par.assign(n, vector<pair<int, int>>(m));

    queue<pair<int, int>> q;

    pair<int, int> st, end;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                st = {i, j};
            }
            else if (grid[i][j] == 'B')
            {
                end = {i, j};
            }
        }
    }

    q.push(st);
    vis[st.first][st.second] = 1;

    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        int r = it.first;
        int c = it.second;

        if (r == end.first && c == end.second)
        {
            break;
        }

        for (int d = 0; d < 4; d++)
        {
            int nr = r + x[d];
            int nc = c + y[d];
            if (valid(nr, nc))
            {
                par[nr][nc] = {r, c};
                q.push({nr, nc});
                vis[nr][nc] = 1;
            }
        }
    }

    if (!vis[end.first][end.second])
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    string path = "";

    pair<int, int> curr = end;

    while (curr != st)
    {
        pair<int, int> p = par[curr.first][curr.second];

        for (int d = 0; d < 4; d++)
        {
            if (p.first + x[d] == curr.first && p.second + y[d] == curr.second)
            {
                path.push_back(dir[d]);
                break;
            }
            
        }
        curr = p;
    }
    reverse(path.begin(), path.end());
    cout << path.length() << endl;
    cout << path << endl;
}

int main()
{
    solve();
}