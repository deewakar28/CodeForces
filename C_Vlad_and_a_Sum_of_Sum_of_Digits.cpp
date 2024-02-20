#include<iostream>
#include<vector>
using namespace std;

#define ll long long int

int digitSum(int n){
    int sum = 0;
    while(n!=0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main(){
    int t;
    cin>>t;

    const int N = 200007;

    vector<int> v(N);

    v[0] = 0;

    for(int i=1; i<N; i++){
        v[i] = v[i-1] + digitSum(i);
    }

    while(t--){
        ll n;
        cin>>n;
        cout<<v[n]<<endl;
    }

    return 0;
}