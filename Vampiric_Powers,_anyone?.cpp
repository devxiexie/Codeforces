#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int n;
int a[N];

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool hp[256] = {false};
        hp[0] = true;
        int curxor = 0;
        int ans = 0;
        for (int q = 0; q < n; q++)
        {
            int i = a[q];
            curxor ^= i;
            for (int k = 0; k < 256; k++)
            {
                if (hp[k])
                    ans = max(ans, k ^ curxor);
            }
            hp[curxor] = true;
        }
        cout << ans << endl;
    }
    return 0;
}
