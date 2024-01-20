#include <iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    int a;
    int count=0;

    vector <int> v;

    for(int i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
        count+=v[i];
    }

    if(count>0){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }

    return 0;
}