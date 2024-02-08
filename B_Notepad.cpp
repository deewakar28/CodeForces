#include<iostream> 
#include<vector>
#include<map>
using namespace std;

#define ll long long int

void solve(){
    ll n;
    bool flag=false;
    cin>>n;

    map<string, int> mp;

    string s, a;
    cin>>s;

    for(int i=1; i<n; i++){
        
        a = "";
        a += s[i-1];
        a += s[i];

        if(mp.find(a) != mp.end() && mp[a] < i-1){
            flag = true;
            break;
        }
        else if(mp.find(a) == mp.end()){
            mp[a] = i;
        }
    }

    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

   
}

int32_t main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}

