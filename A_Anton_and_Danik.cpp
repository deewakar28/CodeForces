#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<char> D, A;

    for(int i=0; i<s.length(); i++){
        if(s[i]=='A'){
            A.push_back(s[i]);
        }
        else{
            D.push_back(s[i]);
        }
    }

    if(A.size()>D.size()){
        cout<<"Anton"<<endl;
    }
    else if(A.size()<D.size()){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }

    return 0;
}