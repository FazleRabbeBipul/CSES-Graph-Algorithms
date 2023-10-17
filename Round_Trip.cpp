#include <bits/stdc++.h>
using namespace std;

string dir = "RLDU";
int dr[] = {0, 0, +1, -1};
int dc[] = {+1, -1, 0, 0};
const long long maxN = 1e5 + 5;

int NoCities, NoRoads, Parent[maxN];
vector<vector<int>> CityGraph(maxN);
bool visited[maxN];
vector<int> cyclePath;

void path(int child, int par)
{
    Parent[child] = par;
    cyclePath.push_back(child);
    int st = child;

    while (Parent[child] != st)
    {
        cyclePath.push_back(Parent[child]);
        child = Parent[child];
    }
    cyclePath.push_back(st);
}

void DFS(int par)
{
    visited[par] = true;
    for (auto child : CityGraph[par])
    {
        if (!visited[child])
        {
            Parent[child] = par;
            DFS(child);
        }
        else if (child != Parent[par])
        {
            if (cyclePath.size() == 0)
                path(child, par);
        }
    }
}

int main()
{
    cin >> NoCities >> NoRoads;
    memset(visited, false, sizeof(visited));

    while (NoRoads--)
    {
        int u, v;
        cin >> u >> v;
        CityGraph[u].push_back(v);
        CityGraph[v].push_back(u);
    }

    for (int city = 1; city <= NoCities; city++)
    {
        if (!visited[city])
        {
            DFS(city);
            if (cyclePath.size())
                break;
        }
    }

    if (cyclePath.size() == 0)
        cout << "IMPOSSIBLE" << '\n';
    else
    {
        cout << cyclePath.size() << endl;
        for (auto city : cyclePath)
            cout << city << " ";
        cout << '\n';
    }
}