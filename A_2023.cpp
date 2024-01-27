#include<iostream>
#include<vector>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        long long int n, a, b, ans=1;
        cin>>n>>a;

        vector<int> v;

        for(int i=0; i<n; i++){
            cin>>b;
            v.push_back(b);
            ans *= v[i];
        }

        if(2023%ans==0){
            cout<<"YES"<<endl;
            cout<<2023/ans<<" ";
            for(int i=1; i<a; i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}