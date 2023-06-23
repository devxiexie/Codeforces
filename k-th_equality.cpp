#include <bits/stdc++.h>
using namespace std;

int a,b,c;
long long int k;

int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>k;
        bool cando = false;
        
        for(int i = pow(10,a-1); i<pow(10,a); i++){
            int left = max(pow(10,b-1), pow(10,c-1)-i);
            int right = min(pow(10,b)-1, pow(10,c)-1-i);
            if(left > right ) continue;
            int have = right-left+1;
            if(k<=have){
                cout<< i << " + " << left+k-1<<" = "<< i + left+k-1<<endl;
                cando = true;
                break;
            }
            k-=have;
        }
        if(cando==false) cout<<"-1"<<endl;
    }
    
}
