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
        vector<long long int> a(n + 1, 0), mx(n + 1, 0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<=n) a[x]++;
        }
        // cout<<n<<"AHAHAHAHAH"<<endl;
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j+=i){
                mx[j]+=a[i];
            }
        }
        // for(int i=1;i<=n;i++) cout<<mx[i]<<' ';
        // cout<<endl;
        cout<<*max_element(mx.begin(), mx.end())<<endl;
    }
    return 0;
    
}
