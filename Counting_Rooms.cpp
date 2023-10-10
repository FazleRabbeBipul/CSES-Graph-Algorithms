#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>

#define pll pair<long long int, long long int>
#define ALL(s) (s).begin(), (s).end()
#define rALL(s) (s).rbegin(), (s).rend()
#define show(x) cout << #x << " : " << x << endl

const long long mod = 1e9 + 7;
int dr[] = {0, 0, +1, -1};
int dc[] = {+1, -1, 0, 0};
const long long maxN = 1e3 + 5;

int N, M, RoomCount = 0;
char BuildingMap[maxN][maxN];
bool visited[maxN][maxN];

bool isvalid(int row, int col)
{
    if (row >= 0 && row < N && col >= 0 && col < M and
        !visited[row][col] && BuildingMap[row][col] != '#')
        return true;
    else
        return false;
}

void DFS(int row, int col)
{
    visited[row][col] = 1;
    for (int ii = 0; ii < 4; ii++) // next move (R, L, D, U)
    {
        int nextRow = row + dr[ii],
            nextCol = col + dc[ii];

        if (isvalid(nextRow, nextCol))
            DFS(nextRow, nextCol);
    }
}

void SolveCountingRooms()
{
    cin >> N >> M;

    for (int row = 0; row < N; row++)
        for (int col = 0; col < M; col++)
            cin >> BuildingMap[row][col];

    memset(visited, false, sizeof(visited));

    for (int row = 0; row < N; row++)
        for (int col = 0; col < M; col++)
            if (BuildingMap[row][col] != '#' && !visited[row][col])
                RoomCount++, // new room found, and DFS call will make it's all cell visited
                    DFS(row, col);

    cout << RoomCount << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    SolveCountingRooms();
}