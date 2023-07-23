#include <bits/stdc++.h>
using namespace std;

int n;
const int N=1e9;

int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        map<string,int> m;
        m["01"] = m["10"] = m["11"] = N;
        for(int i=0;i<n;i++){
            int x;
            string s;
            cin>>x>>s;
            m[s] = min(m[s],x);
        }
        if(min(m["11"], m["01"]+m["10"])>1000000) cout<<-1<<endl;
        else cout<<min(m["11"], m["10"]+m["01"])<<endl;
    }
    return 0;
    
}
