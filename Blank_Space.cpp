#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        int cur=0,ans=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==0) cur++;
            if(x==1) cur=0;
            if(ans<=cur) ans=cur;
        }
        cout<<ans<<endl;
        
    }
    return 0;
    
}
