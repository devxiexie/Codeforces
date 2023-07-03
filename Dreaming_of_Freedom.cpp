#include <bits/stdc++.h>
using namespace std;

const int N=1e6+10;
int mind[N];

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    
    for(int d=2; d*d<N; d++){
        if(mind[d]==0){
            mind[d]=d;
            for(int i=d*d; i<N; i+=d){
                if(mind[i]==0){
                    mind[i]=d;
                }
            }
        }
    }
    for(int i=1;i<N;i++){
        if(mind[i]==0) mind[i]=i;
    }
    
    
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n==1 || mind[n]>m) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
    
}
