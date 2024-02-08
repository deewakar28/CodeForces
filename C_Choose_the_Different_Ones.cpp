#include<iostream>
#include<vector>
#include<set>
using namespace std;

#define ll long long int
#define pb(x) push_back(x)

void solve(){

    set<int> s1, s2, v;
    vector<int>v1;
    ll n, m, k, a, b;
    cin>>n>>m>>k;

    for(int i=0; i<n; i++){
        cin>>a;
        if(a>=1 && a<=k){
            s1.insert(a);
            v.insert(a);
        }
    }

    for(int i=0; i<m; i++){
        cin>>b;
        if(b>=1 && b<=k){
            s2.insert(b);
            v.insert(b);
        }
    }

    if(s1.size()>=k/2 && s2.size()>=k/2 && v.size()==k){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int32_t main(){

    int t;
    cin>>t; 

    while(t--){
        solve();
    }
    return 0;
}