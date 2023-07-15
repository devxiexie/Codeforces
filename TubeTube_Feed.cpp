#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--){
        int n, t;
        cin>>n>>t;
        int a[n+1];
        int b[n+1];
        for(int i=0;i<n;i++){
            int x;cin>>x;
            a[i]=x+i;
        } 
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        // cout<<"a[i] ";
        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<' ';
        // } 
        // cout<<endl;
        // cout<<t<<endl;
        int ans=0;
        int dex=0;
        bool big=false;
        for(int i=0;i<n;i++){
            // cout<<a[i]<<' '<<t<<endl;
            // cout<<(t>=a[i])<<endl;
            if(t>=a[i]){
                big=true;
                if(ans<=b[i]){
                    ans=b[i];
                    dex=i+1;
                }
            }
        }
        // cout<<endl<<big<<endl;
        if(big==true) cout<<dex<<endl;
        else cout<<-1<<endl;
    }
    
    return 0;
    
    
}
