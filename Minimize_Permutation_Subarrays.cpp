#include <bits/stdc++.h>
using namespace std;

int n;
int idx1, idx2, idxn;

int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            if(x==1) idx1=i;
            if(x==2) idx2=i;
            if(x==n) idxn=i;
        }
        // cout<<idx1<<' '<<idx2<<' '<<idxn<<endl;
        if((idx1<idxn && idxn<idx2) || (idx2<idxn && idxn<idx1)) cout<<idx1<< ' ' <<idx2<<endl;
        if(idxn<idx1 && idxn<idx2) cout<<idxn<<' ' << min(idx1,idx2)<<endl; 
        if(idxn>idx1 && idxn>idx2) cout<<max(idx1,idx2)<< ' '<<idxn<<endl;
    }
    return 0;
    
}
