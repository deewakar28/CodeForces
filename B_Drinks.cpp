#include <iostream>
#include <vector> 
#include <iomanip>
using namespace std;

int main() {
    long long n, a;
    double count = 0.0;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);

        count += v[i];
    }

    cout<<fixed<<setprecision(12)<<count / n << endl;

    return 0;
}
