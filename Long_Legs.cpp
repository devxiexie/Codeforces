#include <bits/stdc++.h>
using namespace std;

int a, b;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int ans = a + b;
        for (int k = 1; k <= 100000; k++)
        {
            double x = ceil((a + k - 1) / k);
            double y = ceil((b + k - 1) / k);
            if (ans < x + y + k - 1)
                ans = ans;
            else
                ans = x + y + k - 1;
        }
        cout << ans << endl;
    }
    return 0;
}
