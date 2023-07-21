#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
long long int c[N];
int n;

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
        bool neg = true;
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            if (c[i] >= 0)
                neg = false;
        }
        if (neg)
            cout << *max_element(c, c + n) << endl;
        else
        {
            long long int odd = 0, even = 0;
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    if (c[i] > 0)
                        even += c[i];
                }
                else
                {
                    if (c[i] > 0)
                        odd += c[i];
                }
            }
            if (even > odd)
                cout << even << endl;
            else
                cout << odd << endl;
        }
    }
    return 0;
}
