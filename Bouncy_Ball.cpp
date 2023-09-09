#include <bits/stdc++.h>
using namespace std;

const int MX = 25e3 + 10;
int n, m;
int x1, x2, y01, y2;
string dr;
bool visited[MX][MX][4];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cin >> x1 >> y01 >> x2 >> y2;
        x1--;
        x2--;
        y01--;
        y2--;
        cin >> dr;
        int d = 0;
        // UR=3 UL=1 DR=2 DL=0
        if (dr == "UR")	
            d = 3;
        if (dr == "UL")
            d = 1;
        if (dr == "DR")
            d = 2;
        if (dr == "DL")
            d = 0;
        memset(visited, false, sizeof(visited));
        int i = x1, j = y01;
        int ans = 0;
        bool found = 0;
        while (!visited[i][j][d])
        {
            if (i == x2 && j == y2)
            {
                cout << ans << endl;
                found = true;
                break;
            }
            int actions = 0;
            if (d % 2 == 1 && i == 0)
            {
                // if going up and in first row
                d--;
                // continue in same left or right but change from up to down
                actions++;
            }
            if (d % 2 == 0 && i == n - 1)
            {
                // if going down and in last row
                d++;
                // continue in same left or right but change from down to up
                actions++;
            }
            if (d >= 2 && j == m - 1)
            {
                // if going right and in the last column
                d -= 2;
                // continue in going same up or down but change from left to right
                actions++;
            }
            if (d < 2 && j == 0)
            {
                // if going left and in the first column
                d += 2;
                // continue in going same up or down but change from right to left
                actions++;
            }
            ans += actions;
            // ans += min(actions, 1);
            if (visited[i][j][d])
            {
                found = false;
                break;
            }
            visited[i][j][d] = true;
            // if going up
            if (d % 2 == 1)
                i--;
            else
                i++;
            // if going right
            if (d >= 2)
                j++;
            else
                j--;
        }
        if (!found)
            cout << -1 << endl;
    }
    return 0;
}
