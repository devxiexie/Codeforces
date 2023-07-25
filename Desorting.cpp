#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int a[n];
        long long int smoldiff = 1e9;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 1; i < n; i++)
        {
            smoldiff = min(a[i] - a[i - 1], smoldiff);
        }
        if (smoldiff < 0)
            cout << 0 << endl;
        else if (smoldiff == 0)
            cout << 1 << endl;
        else
        {
            if (smoldiff % 2 == 0)
                cout << (smoldiff / 2) + 1 << endl;
            else
                cout << (smoldiff + 1) / 2 << endl;
        }
    }
    return 0;
}
