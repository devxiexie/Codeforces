#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        map<long long int,long long int> hori, vert, zhenyi, fuyi;
        for(int i=0;i<n;i++){
            long long int x,y;
            cin>>x>>y;
            vert[x]++;
            hori[y]++;
            zhenyi[x-y]++;
            fuyi[x+y]++;
        }
        long long int ans=0;
        for(auto num : vert) ans+=num.second*(num.second-1);
        for(auto num : hori) ans+=num.second*(num.second-1);
        for(auto num : zhenyi) ans+=num.second*(num.second-1);
        for(auto num : fuyi) ans+=num.second*(num.second-1);
        cout<<ans<<'\n';

    }
    return 0;
    
}
