#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n>>s;
        map<string, int> hehe;
        for(int i=0;i<n-1;i++){
            string temp = s.substr(i,2);
            hehe[temp]++;
        }
        cout<<hehe.size()<<endl;
        
    }
    return 0;
    
}
