#include <iostream>
#include<cmath>
using namespace std;

bool prime(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){

    long long  n, m, k;
    cin>>n>>m;

    for(int i=n+1; i<=m; ++i){
        if(prime(i)){
            k = i;
            break;
        }
    }

    if(k==m){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    

    return 0;
}