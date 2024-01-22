#include<iostream>
#include<vector>
using namespace std;

int main(){

    int t; 
    cin>>t;

    while(t--){
        long long int n, f, a, b, d,flag=0, init=0;
    
        cin>>n>>f>>a>>b;

        vector<int>v;

        for(int i=0; i<n; i++){
            cin>>d;
            
            v.push_back(d);

            long long int c = (v[i]-init)*a;
            f -= min(c,b);

            init = v[i];
            
        }

        if(f<=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}