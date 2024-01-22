#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int t;
    cin>>t;
    
    while (t--)
    {
        int n, flag=0;
        string a, b, c;

        cin>>n;

        cin>>a>>b>>c;

        for(int i=0; i<n; i++){
            if((a[i]!=c[i] && b[i]!=c[i])){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}