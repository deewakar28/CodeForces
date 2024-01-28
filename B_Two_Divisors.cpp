#include<iostream>
using namespace std;

#define ll long long int

ll gcd(ll a, ll b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return (a*b)/gcd(a,b);
}

int main(){

    int t;
    cin >> t;

    while (t--) {
        int a, b, ans = 0;
        cin >> a >> b;

        ans = lcm(a,b);
        if(ans!=b){
            cout<<ans<<endl;
        }
        else{
            cout<<b*(b/a)<<endl;
        }
    }
    return 0;
}
