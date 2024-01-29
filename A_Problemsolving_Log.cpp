#include<iostream>
#include<vector>
using namespace std;

#define ll long long int

void solve(){
    ll n, count=0;
    cin>>n;

    string s;
    cin>>s;

    vector <int> v(26, 0);

    for(int i=0; i<n; i++){
        v[s[i]-'A']++;
    }

    for(int i=0; i<v.size(); i++){
        if(v[i]>=i+1){
            count++;
        }
    }

    cout<<count<<endl;
}

int32_t main(){

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}