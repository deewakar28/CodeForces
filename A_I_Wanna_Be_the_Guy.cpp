#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n, a, b, p, q, count = 0;
    cin >> n;

    vector<int> v;

    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> a;
        v.push_back(a);
    }

    cin >> q;
    for (int i = p; i < p+q; i++) {
        cin >> b;
        v.push_back(b);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < p + q; i++) {
        if (v[i-1] != v[i]) {
            count++;
        }
    }

    if (count == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
