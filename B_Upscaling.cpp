#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, a=0, b=0;
        cin>>n;
        
        for(int i=0; i<2*n; i++){
            if(!(i&1)){
                a++;
            }
            for(int j=0; j<n; j++){
                if(a&1){
                    cout<<"##";
                    a++;
                }else{
                    cout<<"..";
                    a++;
                }
            }
            if(n&1){
                a++;
            }
            cout<<endl;
        }

    }
    
    return 0;
}