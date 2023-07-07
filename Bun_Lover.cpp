#include <bits/stdc++.h>
using namespace std;

long long int n;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==4){
            cout<<26<<endl;
            continue;
        }
        cout<<4*n+3+(n-3)*(n)+(n-1)<<endl;
    }
    return 0;
    
}
