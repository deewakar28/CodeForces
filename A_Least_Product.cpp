#include<iostream>
using namespace std; 

#define ll long long int
#define M INT_MAX

void solve(){

    ll n,a, prod=1;
    cin>>n;

    for(ll i=0; i<n; i++){
        cin>>a;
        
        prod = (prod*a) % M;
    }
    if(prod>0){
        cout<<1<<endl;
        cout<<1<<" "<<0<<endl;
    }
    else{
        cout<<0<<endl;
    }
}

int32_t main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}