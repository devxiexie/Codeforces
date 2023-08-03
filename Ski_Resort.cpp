#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int n, k;
long long int q;
long long int a[N];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> q;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int ans = 0;
        int consectutive_so_far = 0;
        for (int i = 0; i < n; i++)
        {
            if (q >= a[i])
            {
                consectutive_so_far++;
            }

            else
            {
                if (consectutive_so_far >= k)
                {
                    int calcwith = consectutive_so_far - k + 1;
                    ans += (calcwith * (calcwith + 1) / 2);
                }
                consectutive_so_far = 0;
            }
            if (i == n - 1 && consectutive_so_far >= k)
            {
                long long int calcwith = consectutive_so_far - k + 1;
                ans += (calcwith * (calcwith + 1) / 2);
            }
        }
        cout << ans << endl;
    }
}
