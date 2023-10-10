#include <bits/stdc++.h>
using namespace std;

string dir = "RLDU";
int dr[] = {0, 0, +1, -1};
int dc[] = {+1, -1, 0, 0};
const long long maxN = 1e3 + 5;

char labyrinth[maxN][maxN], path[maxN][maxN];
bool visited[maxN][maxN], ys = false;
int N, M, Ax, Ay, Bx, By;
pair<int, int> par[maxN][maxN];

bool isvalid(int row, int col)
{
    if (row >= 0 && row < N && col >= 0 && col < M and
        visited[row][col] == false && labyrinth[row][col] != '#')
        return true;
    else
        return false;
}

void BFS_Shortest_Path(int row, int col)
{
    queue<pair<int, int>> q;
    q.push({row, col});
    visited[row][col] = true;
    par[row][col] = {row, col};

    while (!q.empty())
    {
        int currentrow = q.front().first, currentcol = q.front().second;
        visited[currentrow][currentcol] = true;
        q.pop();
        for (int ii = 0; ii < 4; ii++)
        {
            int nextrow = currentrow + dr[ii], nextcol = currentcol + dc[ii];
            if (isvalid(nextrow, nextcol))
            {
                path[nextrow][nextcol] = dir[ii];
                par[nextrow][nextcol] = {currentrow, currentcol};
                visited[nextrow][nextcol] = true;
                q.push({nextrow, nextcol});
                if (labyrinth[nextrow][nextcol] == 'B')
                    ys = true;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(visited, false, sizeof(visited));

    cin >> N >> M;
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < M; col++)
        {
            cin >> labyrinth[row][col];
            if (labyrinth[row][col] == 'A')
                Ax = row, Ay = col;
            if (labyrinth[row][col] == 'B')
                Bx = row, By = col;
        }
    }

    BFS_Shortest_Path(Ax, Ay);

    if (!ys)
        cout << "NO" << '\n';
    else
    {
        string shortestpath = "";
        while (!(Bx == Ax && By == Ay))
        {
            shortestpath += path[Bx][By];
            int Bxx = par[Bx][By].first, Byy = par[Bx][By].second;
            Bx = Bxx, By = Byy;
        }
        reverse(shortestpath.begin(), shortestpath.end());

        cout << "YES" << '\n'
             << shortestpath.size() << endl;
        cout << shortestpath << endl;
    }
}