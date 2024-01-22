#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t; 
    while(t--){
        long long int a, b, c;
        cin>>a>>b;

        c = a+b;
        if(c&1){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}