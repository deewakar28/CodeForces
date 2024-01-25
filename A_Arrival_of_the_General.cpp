#include <iostream>
#include<vector>
using namespace std;

int main(){

    long long int n, a, count=0;
    cin>>n;

    vector<int> v;

    for(int i =0; i<n; i++){
        cin>>a;
        v.push_back(a);
    }

    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            if(v[i]<v[j]){
            swap(v[i], v[j]);
            count++;
            }
        }
    }

    cout<<count<<endl;

    return 0;
}