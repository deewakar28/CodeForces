#include<iostream>
#include<vector>
using namespace std;

int calcGCD(int n, int m){
    while(n>0 && m>0){
        if(n>m) n = n % m;
        else m = m%n;

    }
    if(n==0) return m;
    else return n;
    
}

int main(){

    int t;
    cin>>t;
    while(t--){
       int x;
       cin>>x;

       cout<<x/2<<endl;

    }
    return 0;
}