#include <bits/stdc++.h>
using namespace std;

int n;
char board[3][3];

void solve(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) cin>>board[i][j];
    }
    for(int i=0;i<3;i++){
        if((board[0][i]==board[1][i] && board[1][i]==board[2][i]) && board[0][i]!='.'){
            cout<<board[0][i]<<endl;
            return;
        }
        if((board[i][0]==board[i][1] && board[i][1]==board[i][2]) && board[i][0]!='.'){
            cout<<board[i][0]<<endl;
            return;
        }
        // cout<<(board[0][i]==board[1][i] && board[1][i]==board[2][i])<<endl;
    }
    if(board[1][1]==board[0][0] && board[0][0]==board[2][2] && board[0][0]!='.'){
        cout<<board[0][0]<<endl;
        return;
    }
    if(board[1][1]==board[2][0] && board[2][0]==board[0][2] && board[1][1]!='.'){
        cout<<board[0][2]<<endl;
        return;
    }
    cout<<"DRAW"<<endl;
    return;
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
    
}
