// // #include <bits/stdc++.h>
// #include <iostream>

// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a[200010],dp[200010],mat[200010];
//         dp[0]=0;
//         for(int i=1;i<=n;i++) mat[i]=1000000;
//         for(int i=1;i<=n;i++){
//             cin>>a[i];
//             dp[i]=min(dp[i-1]+1, mat[a[i]]);
//             cout<<"dp[i]"<<dp[i]<<"=min(dp[i-1]+1"<<dp[i-1]+1<<", mat[a[i]]);"<<mat[a[i]]<<endl;
//             mat[a[i]]=min(mat[a[i]],dp[i-1]);
//         }


//     }
//     return 0;
    
// }

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n+5], dp[n+5], mat[n+5];
        dp[0] = 0;
        for (int i = 1; i <= n; i++) {
            mat[i] = 1000000;
        }
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            dp[i] = min(dp[i - 1] + 1, mat[a[i]]);
            mat[a[i]] = min(mat[a[i]], dp[i - 1]);
        }
        cout<<n-dp[n]<<endl;
    }
    return 0;
}
