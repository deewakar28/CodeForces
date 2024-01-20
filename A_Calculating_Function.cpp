#include<iostream>
#include <cmath>

using namespace std;

int main(){

    long long count, n;
    cin>>n;


    if(n&1){
        count= -((n+1)/2);
    }else{
        count = n/2;
    }

    cout<<count<<endl;

    return 0;
}