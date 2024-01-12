#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    string s;
    cin>>s;

    vector<char> ch;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for(int i=0; i<s.length(); i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
            continue;
        }
        else{
            ch.push_back('.');
            ch.push_back(s[i]);
        }
    }

    for(auto x: ch){
        cout<<x;
    }

    return 0;
}