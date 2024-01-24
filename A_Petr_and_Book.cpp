#include <iostream>
#include<vector>
using namespace std;

int main(){

    int n, sum;
    cin>>n;

    int v[10000];

    for(int i=0; i<7 ; i++){

       cin>>v[i];
    }

   sum = v[0];

   int i=0;

    while(sum<n){

        i++;
        i %= 7;
        sum += v[i];
    }

    cout<<i+1<<endl;

    return 0;
}