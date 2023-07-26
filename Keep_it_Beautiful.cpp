#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
int q;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> q;
        int cnt = 0;
        vector<int> a = {};
        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            int newcnt = 0;
            // if ((a.size() > 0 && a.back() == x))
            newcnt = cnt + (a.size() > 0 && a.back() > x);
            // cout << " bbbbbb " << newcnt << " aaaaaaa ";
            if (newcnt == 0 || (newcnt == 1 && x <= a[0]))
            {
                a.push_back(x);
                cnt = newcnt;
                cout << '1';
            }
            else
            {
                cout << '0';
            }
        }
        cout << endl;
        // for (int i = 0; i < a.size(); i++)
        // {
        //     cout << a[i] << ' ';
        // }
        cout << endl;
    }
}
