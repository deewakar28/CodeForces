#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        long long int n, x;
        cin >> n >> x;
        
        if(n>2){
            n -= 2;
            if(n % x != 0){
               cout<<(n / x + 2)<<endl;
            }
            else{
               cout<<(n / x + 1)<<endl;
            }
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}
