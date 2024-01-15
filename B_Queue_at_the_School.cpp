#include <iostream>
using namespace std;

int main(){

    int n, t;
    cin>>n>>t;

    vector<int> s;

    for(int i=0; i<n; i++){
        cin>>s[i];
        if(s[i-1]=='B' && s[i]=='G'){
            swap(s[i-1],s[i]);
            t--;
        }
    }

    for(auto x:s){
        cout<<x;
    }
    return 0;
}