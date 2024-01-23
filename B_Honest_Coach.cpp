#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        long long int n, c, diff;
        cin>>n;

        vector<int> v, a;

        for(int i=0; i<n; i++){
            cin>>c;
            v.push_back(c);
        }

        sort(v.begin(), v.end());

        int digit = 0;

        for(int i=1; i<n; i++){
            diff = v[i] - v[i-1];
            a.push_back(diff);
        }

        sort(a.begin(), a.end());

		cout << a[0] << endl;
    }
    return 0;
}