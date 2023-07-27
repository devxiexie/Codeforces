#include <bits/stdc++.h>
using namespace std;

string comp = "codeforces";

int main()
{
    int t;
    cin>>t;
    while(t--){
        string inp;
        cin>>inp;
        int ans=0;
        for(int i=0;i<10;i++) if(comp[i]!=inp[i]) ans++;
        cout<<ans<<endl;
        
    }
    return 0;
    
}
