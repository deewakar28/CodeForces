#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    string s;
    cin>>s;
    int upper=0, lower=0;

    vector<char> ch;

    for(int i=0; i<s.length(); i++){
        if(isupper(s[i])){
            upper++;
        }else{
            lower++;
        }
    }
    
    for(int i=0; i<s.length(); i++){
        if(upper>lower){
            transform(s.begin(), s.end(), s.begin(), ::toupper);
            ch.push_back(s[i]);
        }
        else{
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            ch.push_back(s[i]);
        }
    }

    for(auto x: ch){
        cout<<x;
    }
    
    return 0;
}