#include <bits/stdc++.h>
using namespace std;

const int N=2e5+10;
int a[N];

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        int alleven=0;
        int allodd=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0) alleven++;
            else allodd++;
        }
        if(alleven==n || allodd==n) cout<<"yes"<<endl;
        else{
            sort(a,a+n);
            if(a[0]%2==1) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
        
    }
    return 0;
    
}
