#include<iostream>
#include<vector>
using namespace std;

int main(){

    int t; 
    cin>>t;
    while(t--){
        int n,a,x, mini=INT_MIN, maxi=INT_MAX;

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

        if(maxi>=mini){
            int ans = maxi - mini-1;
            for(auto it: v){
                if(it<=maxi && it>=mini){
                   ans++;
                }
            }

        cout<<ans<<endl;
            
        }
        else{
            cout<<0<<endl;
        }
        
    }
    return 0;
}