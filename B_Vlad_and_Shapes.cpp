#include<iostream>
#include<set>
using namespace std;

void solve(){
    int n, count = 0, ans = 0;
    cin>>n;

    set<int> s;

    string st;

    for(int i=0; i<n; i++){
        count=0; 
        cin>>st;
        for(int j=0; j<n; j++){
            if(st[j]=='1'){
                count++;
            }
        }
        if(count>0){
            if(s.empty()){
                s.insert(count);
            }else if(s.find(count)==s.end()){
                ans = 1;
            }
        }
    }

    if(ans){
        cout<<"TRIANGLE"<<endl;
    }else{
        cout<<"SQUARE"<<endl;
    }
    
}

int32_t main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}