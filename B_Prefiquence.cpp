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
       ll n, m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;

        ll i = 0, j = 0;

        while (i < n && j < m) {
            if (a[i] == b[j]) {
                i++;
            }
            j++;
        }

        cout << i << endl;
}

int32_t main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}