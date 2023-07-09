#include <bits/stdc++.h>
using namespace std;

const int N=1e6+10;
int n;
int b[N];

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>b[i];
        int pre[n+1], suf[n+1];
        for(int i=0;i<n;i++){
            pre[i]=b[i]+i;
            suf[i]=b[i]-i;
        }
        
        // for(int i=0;i<n;i++){
        //     cout<<pre[i]<<' ';
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<suf[i]<<' ';
        // }
        // cout<<endl;
        for(int i=1;i<n;i++){
            pre[i]=max(pre[i], pre[i-1]);
        }
        for(int i=n-2; i>=0; i--){
            suf[i]=max(suf[i], suf[i+1]);
        }
        // for(int i=0;i<n;i++){
        //     cout<<pre[i]<<' ';
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<suf[i]<<' ';
        // }
        // cout<<endl;
        int ans=0;
        for(int i=1;i<n-1;i++) ans=max(ans, b[i]+pre[i-1]+suf[i+1]);
        cout<<ans<<'\n';

    }
    return 0;
    
}
