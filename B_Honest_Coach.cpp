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

        vector<int> v;

        for(int i=0; i<n; i++){
            cin>>c;
            v.push_back(c);
        }

        sort(v.begin(), v.end());

        long long int result=INT_MAX;

        for(int i=1; i<n; i++){
            diff = v[i] - v[i-1];
            result= min(result, diff);
        }

        cout<<result<<endl;
    }
    return 0;
}