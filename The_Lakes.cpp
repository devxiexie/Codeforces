#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[1010][1010];
bool visited[1010][1010];

int dfs(int i, int j){
    visited[i][j]=1;
    int ans=a[i][j];
    if(i!=0 && a[i-1][j]!=0 && !visited[i-1][j]) ans += dfs(i-1,j);
    if(i+1!=n && a[i+1][j]!=0 && !visited[i+1][j]) ans += dfs(i+1,j);
    if(j!=0 && a[i][j-1]!=0 && !visited[i][j-1]) ans += dfs(i,j-1);
    if(j+1!=m && a[i][j+1]!=0 && !visited[i][j+1]) ans += dfs(i,j+1);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        
        cin>>n>>m;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){ 
                visited[i][j]=0;
                cin>>a[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j] && a[i][j]!=0) ans=max(ans, dfs(i,j));
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
    
}
