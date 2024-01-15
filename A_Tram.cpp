#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int sum = 0;
    int maxi = 0;
    while(t--){
        int l;
        cin>>l;
        int e;
        cin>>e;

        sum-=l;
        sum+=e;
        maxi = max(sum,maxi);
    }
    cout<<maxi<<endl;

    return 0;
}