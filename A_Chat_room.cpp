#include<iostream>
using namespace std;

int main(){

    string s;
    cin>>s;
    
    string hello = "hello";
    int l = 0;
    int temp = 0;

    for(int i=0; i<s.length(); i++){
        if(s[i]==hello[l]){
            temp++;
            l++;
        }
    }

    if(temp==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}