#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string s;
    cin>>s;
    string ans="";

    sort(s.begin(), s.end());
    for(int i=0; i<s.length(); i++){
        int j=0;
        for(j=0; j<s.length(); j++){
            if(s[i]==s[j]){
                break;
            }
        }
        if( i== j){
            ans += s[i];
        }
    }

    if(ans.length()%2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}