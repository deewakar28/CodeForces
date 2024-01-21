#include <iostream>
#include <vector>
using namespace std;

int main(){

    long long n,k,a;
    cin>>n>>k;

    for(int i=1; i<=k; i++){
       a = n%10;
       if(a==0){
        n/=10;
       }
       else{
        n-=1;
       }
    }
    cout<<n<<endl;

    return 0;
}