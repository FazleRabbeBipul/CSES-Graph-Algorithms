#include <bits/stdc++.h>
using namespace std;

string dir = "RLDU";
int dr[] = {0, 0, +1, -1};
int dc[] = {+1, -1, 0, 0};
const long long maxN = 1e5 + 5;

int Pupils, NumberofFriendship;
vector<vector<int>> friendship(1e5 + 7);
vector<int> team(maxN, -1);
bool ys = true;

void BFS_TeamMaking(int stu)
{
    team[stu] = 1;
    queue<int> q;
    q.push(stu);

    while (!q.empty())
    {
        int stu1 = q.front();
        q.pop();
        for (auto stu2 : friendship[stu1])
        {
            if (team[stu2] != -1)
            {
                if (team[stu1] == team[stu2])
                    ys = false;
            }
            else
            {
                team[stu2] = 1 - team[stu1];
                q.push(stu2);
            }
        }
    }
}

int main()
{
    cin >> Pupils >> NumberofFriendship;+
    while (NumberofFriendship--)
    {
        int frnd1, frnd2;
        cin >> frnd1 >> frnd2;
        friendship[frnd1].push_back(frnd2);
        friendship[frnd2].push_back(frnd1);
    }

    for (int stu = 1; stu <= Pupils; stu++)
        if (team[stu] == -1)
            BFS_TeamMaking(stu);

    if (!ys)
        cout << "IMPOSSIBLE" << endl;
    else
    {
        for (int stu = 1; stu <= Pupils; stu++)
            cout << (team[stu] == 1 ? "1 " : "2 ");
        cout << '\n';
    }
}