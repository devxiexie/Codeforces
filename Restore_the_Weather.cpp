#include <bits/stdc++.h>
using namespace std;

int n,k;

int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        pair<int,int> a[n+1];
        pair<int,int> b[n+1];
        for(int i=0;i<n;i++){
            int x; cin>>x;
            a[i]={x,i};
        }
        for(int i=0;i<n;i++){
            int x; cin>>x;
            b[i]={x,i};
        }
        sort(a, a + n);
        sort(b, b + n);
        int ans[n+1];
        for(int i=0;i<n;i++) ans[a[i].second]=b[i].first;
        for(int i=0;i<n;i++) cout<<ans[i]<<' ';
        cout<<endl;
    }
    return 0;
    
}
