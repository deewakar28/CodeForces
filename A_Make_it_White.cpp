#include <iostream>
using namespace std;

void solve(){
    ll n, flag1, flag2;
    cin>>n;

    string s;
    cin>>s;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='B'){
            flag1=i;
            break;
        }
        
    }
    for(int i=n; i>=0; i-- ){
        if(s[i]=='B'){
            flag2 = i;
            break;
        }
    }
    cout<<(flag2-flag1)+1<<endl;
}


int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}