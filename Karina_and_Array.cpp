#include <bits/stdc++.h>
using namespace std;

const int N=2e5+10;
int n;
long long int a[N];

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a, a+n);
        cout<<max(a[0]*a[1], a[n-2]*a[n-1])<<endl; 
    }
    return 0;
    
}
