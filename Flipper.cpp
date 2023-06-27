#include <bits/stdc++.h>
using namespace std;

int n;


int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> nums;
        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            nums.push_back(x);
        }


        int r=0;
        for(int i=0;i<n;i++){
            if(nums[min(n-1,r+1)]<=nums[min(n-1,i+1)]) r=i;
        }
        for(int i=r+1;i<n;i++) cout<<nums[i]<< ' ';
        cout<<nums[r]<<' ';
        for(int i=r-1;i>=0;i--){
            if(nums[i]>nums[0]) cout<<nums[i]<<' ';
            else{
                for(int j=0;j<=i;j++) cout<<nums[j] <<' ';
                break;
            }
        }

        cout<<endl;
    }
    
}
