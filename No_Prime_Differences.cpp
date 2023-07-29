#include <bits/stdc++.h>
using namespace std;

int n, m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int a[n][m];

        // if (m % 2 == 0)
        // {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (i % 2 == 0)
                    cout << j + ((i - 1) / 2) * m << ' ';
                else
                    cout << (n / 2 + (i - 1) / 2) * m + j << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }
    // }

    // if (m % 2 == 1)
    // {
    //     if (n % 2 == 0)
    //     {
    //         for (int i = 0; i < n; i++)
    //         {
    //             for (int j = 0; j < m; j++)
    //             {
    //                 if (i % 2 == 0)
    //                 {
    //                     if (j == (m - 1))
    //                     {
    //                         a[i][j] = (a[i][0] + m);
    //                     }
    //                     else
    //                     {
    //                         a[i][j] = (j + 1) + ((i + 1) - 1) * m;
    //                     }
    //                 }
    //                 else
    //                 {
    //                     if (j == (m - 1))
    //                     {
    //                         a[i][j] = (j + 1) + ((i + 1) - 1) * m;
    //                     }
    //                     else
    //                     {
    //                         a[i][j] = ((m) - (j + 1)) + ((i + 1) - 1) * m;
    //                         if (j == m - 2)
    //                             a[i][j]--;
    //                     }
    //                 }
    //             }
    //         }
    //         for (int i = 0; i < n; i++)
    //         {
    //             for (int j = 0; j < m; j++)
    //             {
    //                 if (j == m - 1)
    //                 {
    //                     if (i % 2 == 0)
    //                     {
    //                         cout << a[i + 1][j] << ' ';
    //                     }
    //                     else
    //                     {
    //                         cout << a[i - 1][j] << ' ';
    //                     }
    //                 }
    //                 // if (j == 0)
    //                 // {
    //                 //     if (i % 2 == 0)
    //                 //     {
    //                 //         cout << a[i + 1][j] << ' ';
    //                 //     }
    //                 //     else
    //                 //     {
    //                 //         cout << a[i - 1][j] << ' ';
    //                 //     }
    //                 // }
    //                 else
    //                     cout << a[i][j] << ' ';
    //             }
    //             cout << endl;
    //         }
    //     }
    return 0;
}
