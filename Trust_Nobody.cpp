#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int l[n];
        for(int i=0;i<n;i++) cin>>l[i];
        bool notdone=true;
        for(int cnt=0;cnt<n;cnt++){
            int real=0;
            for(int i=0;i<n;i++){
                if(cnt<l[i]) real++;
            }
            if(real==cnt){
                cout<<real<<endl;
                notdone=false;
                break;
            }
        }
        if(notdone) cout<<-1<<endl;
    }
    return 0;
    
}
