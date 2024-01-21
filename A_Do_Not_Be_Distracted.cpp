#include <iostream>
#include <vector>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        long long n, flag, count=0;
        cin>>n;

        int arr[10000];

        for(int i=1; i<n; i++){
            cin>>arr[i];
            arr[0] == 1;
            if(arr[i-1]==arr[i]){
                continue;
            }else{
                if(arr[i]>0){
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
        cout<<"YES"<<endl;
       
        
    }
    return 0;
}