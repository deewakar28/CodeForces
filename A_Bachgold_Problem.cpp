#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

int main(){

    long long int n, b, a=0, count=0;
    cin>>n;

    vector<int> v;

    for(int i=0; i<n; i++){
        if(n&1){
             if(a!=n && n-a!=3){
                a += 2;
                b = 2;
               count++;
               v.push_back(b);
            }
            else{
                a += 3;
                b = 3;
               count++;
               v.push_back(b);
               break;
            }
        }else{
            if(a!=n){
                a += 2;
                b = 2;
               count++;
               v.push_back(b);
            }
            else{
                break;
            }
        }
    }  

    cout<<count<<endl;
    for(auto x : v){
        cout<<x<<" ";
    }


    return 0;
}