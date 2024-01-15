#include <iostream>
#include <vector>
using namespace std; 

int main(){

    int t,h;
    cin>>t>>h;

    int sum=0;

    int arr[10000];
    
    for(int i=0; i<t; i++){
        cin>>arr[i];
        if(arr[i]<=h){
            sum++;
        }
        else{
            sum+=2;
        }
    }

    cout<<sum<<endl;

    return 0;
}