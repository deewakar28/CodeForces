#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    string alphabets = "abcdefghijklmnopqrstuvwxyz";
    while (t--) {
        string ans = "";
        int n;
        cin >> n;
        int l = 26;
        int m = 2;
        int k = 0;
        while(k<3) {
            if ((n - l) >= m) {
                ans = alphabets[l - 1] + ans;
                n -= l;
                k++;
                m--;
            } else {
                l--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
