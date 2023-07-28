#include <bits/stdc++.h>
using namespace std;

int n;
string s;

void solve()
{
        cin>>n>>s;
        if(n%2==1){
            cout<<-1<<endl;
            return;
        }
        map<char, int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            if(mp[s[i]]>n/2){
                cout<<-1<<endl;
                return;
            }
        }
        int paircnt[26]={0};
        int amtpair=0;
        for(int i=0;i<n/2;i++){
            if(s[i]==s[n-1-i]){
                amtpair++;
                paircnt[s[i]-'a']++;
            }
        }
        for(int i=0;i<26;i++){
            if(paircnt[i]>amtpair/2){
                cout<<paircnt[i]<<endl;
                return;
            }
        }
        cout<<(amtpair+1)/2<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
