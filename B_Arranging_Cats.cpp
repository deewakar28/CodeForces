#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int count = 0;

        string s;
        cin>>s;
        string f;
        cin>>f;

        for(int i=0; i<n; i++){
            if(s[i]=='0' && f[i]=='1'){
                count++;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}