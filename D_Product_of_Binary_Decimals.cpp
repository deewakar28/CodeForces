#include <iostream>
#include<vector>
#include<algorithm>
#include <cmath>
using namespace std;

#define pb push_back
#define all(x) x.begin(),x.end()
bool isBinary(int x) {
    while (x > 0) {
        int digit = x % 10;
        if (digit != 0 && digit != 1)
            return false;
        x /= 10;
    }
    return true;
}

string canBeProductOfBinaryDecimals(int n) {
 
    if (isBinary(n))
        return "YES";
 
    vector<int> bin;

    bin.pb(10);
    bin.pb(11);
    bin.pb(101);
    bin.pb(111);
    bin.pb(1001);
    bin.pb(1011);
    bin.pb(1101);
    bin.pb(1111);
    bin.pb(10001);
    bin.pb(10011);
    bin.pb(10101);
    bin.pb(11001);
    bin.pb(10111);
    bin.pb(11011);
    bin.pb(11101);
    bin.pb(11111);
    reverse(all(bin));
    int i=0;
    while(i<bin.size()){
        if(n==1) break;
        if(n%bin[i] == 0){
            n/=bin[i];
        }
        else{
            i++;
        }
    }
    if(n==1){
        return "YES";
    }
    else{
        return "NO";
    }

}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        cout << canBeProductOfBinaryDecimals(n) << endl; 
    }

    return 0;
}
