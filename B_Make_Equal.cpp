#include<iostream>
using namespace std;
 
 void donut(){
    long long int t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      int arr[n];
      int mini= INT_MAX;
      int s=0;
      for(int i=0;i<n;i++){
        cin>>arr[i];
        s+=arr[i];
      }
      int r=s/n;
      s=0;
      int i=0;
      for(; i<n; i++){
        if(arr[i]>r){
            s+=(arr[i]-r);
        }
        else{
            s-=(r-arr[i]);
        }
        if(s<0){
            break;
        }
      }
      if(i<n){
        cout<<"NO"<<endl;
      }
      else cout<<"YES"<<endl;
      
    }


 }
int main(){
    donut();
    return 0;
}