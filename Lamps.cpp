#include <bits/stdc++.h>
using namespace std;

int n;

bool comp(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first != b.first)
    {
        return a.first < b.first; // Sort by first element in ascending order
    }
    else
    {
        return a.second > b.second; // Sort by second element in descending order
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back({a, b});
        }
        sort(v.begin(), v.end(), comp);
        // for (int i = 0; i < n; i++)
        // {
        //     cout << v[i].first << ' ' << v[i].second << "  ";
        // }
        // cout << endl;
        // long long int ans = 0;
        // int usin = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     pair<int, int> cur = v[i];
        //     if (usin == cur.first)
        //         continue;
        //     usin = cur.first;
        //     for (int j = 0; j < usin && j < n && i + j < n; j++)
        //     {
        //         if (v[i + j].first == usin)
        //             ans += v[i + j].second;
        //     }
        // }
        // cout << ans << '\n';

        long long int ans=0;
        int on=0,i=0,start=0;
        while(i<n){
            ans+=v[i].second;
            on++;
            i++;
            int cnt=0;
            while(start<n && v[start].first<=on){
                if(start<i) cnt++;
                start++;
            }
            on-=cnt;
            i=max(i,start);
        }
        cout<<ans<<endl;
    }
}
