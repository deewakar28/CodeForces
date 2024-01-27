#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    
    while(t--){
        string a, b, c;
        int count1(0), count2(0), count3(0);
        cin>>a>>b>>c;

        for(int i=0; i<3; i++){
            if(a[i]=='A' || b[i]=='A' || c[i]=='A'){
                count1++;
            }
            if(a[i]=='B' || b[i]=='B' || c[i]=='B'){
                count2++;
            }
            if(a[i]=='C' || b[i]=='C' || c[i]=='C'){
                count3++;
            }
        }
        if(count1==2){
            cout<<"A"<<endl;
        }
        else if(count2==2){
            cout<<"B"<<endl;
        }
        else if(count3==2){
            cout<<"C"<<endl;
        }
    }
    return 0;
}