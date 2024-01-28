#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        vector<char> v;

        reverse(s.begin(), s.end());

        for(int i=0; i<n; i++){
            if(s[i] == 'a'|| s[i]=='e' || s[i]=='i' || s[i]=='o'|| s[i]=='u'){
                v.push_back(s[i]);
                v.push_back(s[i+1]);
                v.push_back('.');
                i++;
            }
            else{
                v.push_back(s[i]);
                v.push_back(s[i+1]);
                v.push_back(s[i+2]);
                v.push_back('.');
                i+=2;
            }
        }

        v.pop_back();

        reverse(v.begin(), v.end());

        for(auto x: v){
            cout<<x;
        }
        cout<<endl;

    }
    return 0;
}