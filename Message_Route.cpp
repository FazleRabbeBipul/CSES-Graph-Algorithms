#include <bits/stdc++.h>
using namespace std;

string dir = "RLDU";
int dr[] = {0, 0, +1, -1};
int dc[] = {+1, -1, 0, 0};
const long long maxN = 1e5 + 5;

int NumberofComputer, NumberofConnections, MaijaComputer;
vector<vector<int>> Connections(1e5 + 7);
bool visited[maxN], ys = false;
int par[maxN], UoleviComputer = 1;

void BFS(int UoleviComputer)
{
    visited[UoleviComputer] = true;
    queue<int> q;
    q.push(UoleviComputer);
    par[UoleviComputer] = UoleviComputer; // 1

    while (!q.empty())
    {
        int curComputer = q.front();
        visited[curComputer] = true;
        q.pop();
        for (auto nextComputer : Connections[curComputer])
        {
            if (!visited[nextComputer])
            {
                visited[nextComputer] = true;
                q.push(nextComputer);
                par[nextComputer] = curComputer;
                if (nextComputer == MaijaComputer)
                    ys = true;
            }
        }
    }
}
int main()
{
    cin >> NumberofComputer >> NumberofConnections;
    MaijaComputer = NumberofComputer;
    memset(visited, false, sizeof(visited));

    while (NumberofConnections--)
    {
        int u, v;
        cin >> u >> v;
        Connections[u].push_back(v);
        Connections[v].push_back(u);
    }

    BFS(UoleviComputer);

    if (!ys)
        cout << "IMPOSSIBLE" << '\n';
    else
    {
        vector<int> ShortestPath;
        while (MaijaComputer != UoleviComputer)
        {
            ShortestPath.push_back(MaijaComputer);
            MaijaComputer = par[MaijaComputer];
        }
        ShortestPath.push_back(UoleviComputer);
        reverse(ShortestPath.begin(), ShortestPath.end());

        cout << ShortestPath.size() << endl;
        for (auto pc : ShortestPath)
            cout << pc << " ";
        cout << '\n';
    }
}