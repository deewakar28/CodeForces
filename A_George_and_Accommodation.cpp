#include <iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;
    int count = 0;
    vector<int> v;
    int a, b;

    for(int i=0; i<n; i++){
        cin>>a;
        cin>>b;
        v.push_back(a);
        v.push_back(b);

        if(b-a>=2){
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}