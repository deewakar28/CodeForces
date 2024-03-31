#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

#define pb push_back
#define ll long long 
#define all(x) x.begin(),x.end()

vector<ll> divisors;

void getdiv(ll n){
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            divisors.push_back(i);
            if((n/i)!=i){
                divisors.push_back(n/i);
            }
        }
    }
    sort(divisors.begin(),divisors.end());
}

bool checkString(string a, string b){
    ll c=0;
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i]){
            c++;
        }
    }
    if(c>1)return false;
    return true;
}

void solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    getdiv(n);
    for(auto &it:divisors){
        string s1 = s.substr(0,it);
        string s2 = s.substr(n-it);

        string temp1, temp2;

        for(int i =0; i<n/it; i++){
            temp1 += s1;
            temp2 += s2;
        }

        if(checkString(temp1,s)||checkString(temp2,s)){
            cout<<it<<endl;
            return;
        }
    }
    
}

int32_t main() {
    int t;
    cin >> t; 
    while (t--) {
        solve();
        divisors.clear();
    }
}
