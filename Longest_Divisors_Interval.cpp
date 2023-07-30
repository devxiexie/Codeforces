#include <bits/stdc++.h>
using namespace std;

long long int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1) cout<<1<<endl;
        else if(n==2) cout<<2<<endl;
        else{
        for(int i=1;i<=n;i++){
            if(n%i!=0) {
                cout<<i-1<<endl;
                break;
            }
        }
        }
    }
    return 0;
    
}
