#include<iostream>
#include<vector>
using namespace std;

int main(){

    int a, b;
    cin>>a>>b;

    vector<int> v1(a);
    vector<int> v2(b);
    vector<int> ans(b);

    for(int i=0; i<a; i++) cin>>v1[i];
    for(int i=0; i<b; i++) cin>>v2[i];

    int i=0, j=0;

    while(i<a || j<b){
        if(j==b || (i<a && v1[i]<v2[j])){
            i++;
        }else{
            ans[j++] = i;
        }
    }

    for(auto x: ans){
        cout<<x<<" ";
    }

    return 0;
}