#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        long long int n, a, sum=0;
        cin>>n;

        for(int i=0; i<n; i++){
            cin>>a;
            sum += a;
        }

        long long int sqrtSum = sqrt(sum);
        if(sqrtSum * sqrtSum == sum){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}