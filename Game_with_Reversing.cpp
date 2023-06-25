#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        string fir,sec;
        cin>>fir>>sec;
        int amtdiff=0, revamtdiff=0;
        for(int i=0;i<n;i++){
            if(fir[i]!=sec[i]) amtdiff++;
        }
        reverse(sec.begin(), sec.end());
        for(int i=0;i<n;i++){
            if(fir[i]!=sec[i]) revamtdiff++;
        }
        // cout<<amtdiff<<' '<<revamtdiff<<endl;
        if(amtdiff<=1) {
            cout<<amtdiff<<endl;
            continue;
        }
        if(revamtdiff==0){
            cout<<2<<endl;
            continue;
        }
        int cnt = amtdiff+amtdiff - amtdiff%2;
        int revcnt = 0;
        if(revamtdiff!=0) revcnt = revamtdiff+revamtdiff - (1-revamtdiff%2);
        // else revcnt=2*(1-n%2);
        int ans = min(cnt, revcnt);
        cout<<ans<<endl;
    }
    return 0;
}
