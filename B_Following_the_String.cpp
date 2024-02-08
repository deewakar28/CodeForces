#include<iostream>
#include <vector>
using namespace std;

#define ll long long int

void solve(){
    ll n, a;
    cin>>n;

    vector<int> v1;

    vector<int> v(n) ; 

    char ch;
    string s = "";

    for(int i=0; i<n; i++){
        cin>>a;
        v1.push_back(a); 
    }

    for(int i=0; i<n; i++){ 
        v[v1[i]]++; 
        char l = 'a'+v[v1[i]]-1;
       cout<<l;
    }
    cout<<endl ; 
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}