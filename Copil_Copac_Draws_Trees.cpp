#include <bits/stdc++.h>
using namespace std;

const int N=2e5+10;
int dp[N],id[N];
vector<pair<int,int>> edg[N];

void dfs(int u){
    for(auto it : edg[u]){
        if(dp[it.first]==0){
            // if (it.second<=id[u]) dp[it.first]=dp[u]+1;
            dp[it.first] = dp[u] + (it.second <= id[u]);
            // cout<<(it.second<=id[u])<<' '<<"aaaaa"<<endl;
            id[it.first]=it.second;
            dfs(it.first);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1; i<=n; i++) dp[i] = id[i] = 0, edg[i].clear();
        for(int i=1;i<n;i++){
            int u,v;
            cin>>u>>v;
            edg[u].push_back({v,i});
            edg[v].push_back({u,i});
        }
        dp[1]=1;
        dfs(1);
        int ans=0;
        for(int i=1;i<=n;i++) ans=max(ans,dp[i]);
        cout<<ans<<endl;
    }
}
