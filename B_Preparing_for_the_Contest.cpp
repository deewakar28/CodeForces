#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){

    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=v.size()-1; i>=0; --i)
    {
        v[n-i-1]=i+1;
    }
    sort(v.begin(),v.begin()+k+1);
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
}

int32_t main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }

}