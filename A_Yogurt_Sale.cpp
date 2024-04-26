#include <iostream>
using namespace std;

#define ll long long

void solve(){

    ll n, a, b, j, k, ans=0;
    cin>>n>>a>>b;

    if(n==1){
        ans = a;
    }else{
        int i=0;
        if(n&1){
            k = ((n-1)*b)/2 + a;
        }else{
            k = (n*b)/2;
        }
        j = n*a;
        ans = min(j,k);
    }

    cout<<ans<<endl;
    
}

int32_t main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}