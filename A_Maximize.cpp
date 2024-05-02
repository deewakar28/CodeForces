#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

#define ll long long

int gcd(int a, int b) 
{ 
    int result = min(a, b); 
    while (result > 0) { 
        if (a % result == 0 && b % result == 0) { 
            break; 
        } 
        result--; 
    } 
    return result+b; 
} 

void solve(){

    ll x;
    cin >> x;

       
    ll y = x - 1;
    cout << y << endl;
}

int32_t main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}