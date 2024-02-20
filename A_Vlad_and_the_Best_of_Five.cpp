#include<iostream>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int count1=0, count2=0;

    for(int i=0; i<5; i++){
        if(s[i]=='A'){
            count1++;
        }else{
            count2++;
        }
    }

    if(count1>count2){
        cout<<'A'<<endl;
    }else{
        cout<<'B'<<endl;
    }
}

int32_t main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}