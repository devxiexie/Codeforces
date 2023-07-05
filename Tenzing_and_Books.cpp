#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[100010];
        int s=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++) cin>>a[j];
            for(int j=0;j<n;j++){
                if((x | a[j])!=x) break;
                else s|=a[j]; 
            }
        }
        if(x==s) cout<<"yES"<<endl;
        else cout<<"no"<<endl;
        
    }
    return 0;
    
}
