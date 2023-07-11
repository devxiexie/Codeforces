#include <bits/stdc++.h>
using namespace std;

int n,q;
vector<vector<int>> a;
vector<long long int> cnt;

void dfs(int u, int prev){
    if(a[u].size()==1 && a[u][0]==prev){
        cnt[u]=1;
    }
    else{
        for(auto nxt:a[u]){
            if(nxt!=prev){
                dfs(nxt,u);
                cnt[u]+=cnt[nxt];
            }
        }
    }
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        a.assign(n, vector<int>());
        cnt.assign(n,0);
        for(int i=0;i<n-1;i++){
            int u,v;
            cin>>u>>v;
            u--;
            v--;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        dfs(0,-1);
        cin>>q;
        while(q--){
            long long int x,y;
            cin>>x>>y;
            cout<<cnt[x-1]*cnt[y-1]<<endl;
        }


    }
    return 0;
    
}
