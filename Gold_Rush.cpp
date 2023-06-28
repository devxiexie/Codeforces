#include <bits/stdc++.h>
using namespace std;

int n, target;
const int N=1e7+10;
int dp[N];

bool dfs(int i){
    if(i==target) return true;
    else if(i%3!=0) return false;
    else{
        return (dfs(i/3) || dfs(2*i/3));
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        
        cin>>n>>target;
        if(dfs(n)){
            cout<<"yEs"<<endl;
        }
        else cout<<"nO"<<endl;
        
    }
    return 0;
    
}
