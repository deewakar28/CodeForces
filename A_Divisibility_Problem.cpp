#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    
    while(t--){
        long long int a,b,c,d,e, count=0;
        cin>>a>>b;

        if(a%b!=0){
            c = a/b;
            d = c+1;
            e = b*d;
            count = e-a;
        }

        cout<<count<<endl;
    }
    return 0;
}