#include <iostream>
using namespace std;

int main(){

    long long int n, a;
    cin>>n>>a;

    int mini=0, maxi=0 ,maxValue=a, minValue=a;

    for(int i=1; i<n; i++){
        
        cin>>a;

        if(a>maxValue){
            maxValue=a;
            maxi= i;
        }
        else if(a<=minValue){
            mini=i;
            minValue=a;
        }

    }

    if(maxi>mini){
        cout<<maxi + (n-1-mini) - 1;
    }
    else{
        cout<<maxi + (n-1-mini);
    }

    return 0;
}