#include <iostream>
using namespace std;

long long int ans[2050000];
long long int a[1500][1500];
long long int curr=1;

int main(){
    for(int i=1;i<=1499;i++){
        for(int j=i-1; j>=1;j--){
            a[j][i - j] = a[j - 1][i - j] + a[j][i - j - 1] - a[j - 1][i - j - 1] + curr * curr;
            
            ans[curr] = a[j][i - j];
			curr++;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<ans[n]<<endl;
    }
}
