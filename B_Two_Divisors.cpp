#include<iostream>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--) {
        int a, b, ans = 0, temp = 0, c = 0;
        cin >> a >> b;
        bool found = false; 

        for (int i = 1; i <= 10; i++) {
            c = a * i;
            for (int j = 1; j <= 10; j++) {
                temp = b * j;
                if (temp == c) {
                    ans = temp;
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        cout<<ans<<endl;
    }
    return 0;
}
