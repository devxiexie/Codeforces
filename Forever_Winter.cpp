#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        
        int n,m;
        cin>>n>>m;
        int cnt[n+1]={0};
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            cnt[u]++;
            cnt[v]++;
        }
        // for(int i=0;i<n;i++) cout<<i<<": "<<cnt[i]<<endl;
        
        map<int,int> cntofcnt;
        for(int i=1;i<=n;i++) cntofcnt[cnt[i]]++;
        vector<int> hehe;
        for(auto c:cntofcnt) hehe.push_back(c.second);
        sort(hehe.begin(),hehe.end());
        // for(int i=0;i<hehe.size();i++) cout<<hehe[i]<<' ';
        if(hehe.size()==3) cout<<hehe[1]<<' '<<hehe[2]/hehe[1]<<endl;
        else cout<<hehe[0]-1<<' '<<hehe[1]/(hehe[0]-1)<<endl;

    }
    return 0;
    
}
