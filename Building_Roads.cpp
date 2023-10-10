#include <bits/stdc++.h>
using namespace std;

string dir = "RLDU";
int dr[] = {0, 0, +1, -1};
int dc[] = {+1, -1, 0, 0};
const long long maxN = 2e5 + 5;

int NumberofCities, NumberofRoads;
vector<vector<int>> City(1e5 + 5);
vector<int> NewRoads;
bool visited[maxN];

void DFS(int currentCity)
{
    visited[currentCity] = true;
    for (auto nextCity : City[currentCity])
        if (!visited[nextCity])
            DFS(nextCity);
}

int main()
{
    memset(visited, false, sizeof(visited));
    cin >> NumberofCities >> NumberofRoads;

    for (int ii = 0; ii < NumberofRoads; ii++)
    {
        int u, v;
        cin >> u >> v;
        City[u].push_back(v);
        City[v].push_back(u);
    }

    for (int cityID = 1; cityID <= NumberofCities; cityID++)
    {
        if (!visited[cityID])
        {
            DFS(cityID);
            NewRoads.push_back(cityID);
        }
    }

    cout << NewRoads.size() - 1 << '\n';
    for (int ii = 0; ii < NewRoads.size() - 1; ii++)
        cout << NewRoads[ii] << " " << NewRoads[ii + 1] << '\n';
}
