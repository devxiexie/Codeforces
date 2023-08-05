#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        int ans=0;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(a>b) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
    
}
