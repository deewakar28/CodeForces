#include<iostream>
#include<vector>
using namespace std;

int main(){

    int t; 
    cin>>t;
    while(t--){
        int n,a,x, mini=0, maxi=0;

        vector<int> v;
        
        for(int i=0; i<n; i++){
            cin>>a>>x;
            if(a==1){
                mini= max(x,mini);
            }else if(a==2){
                maxi = min(x, maxi);
            }else{
                v.push_back(x);
            }
        }

        if(maxi<mini){
            cout<<0<<endl;
        }

        int ans = maxi - mini-1;
        for(auto ele: v){
            if(ele<=maxi && ele>=mini){
                ans--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}