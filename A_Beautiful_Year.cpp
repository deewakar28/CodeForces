#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;

    while(true){

        num++;

        int a = num/1000;
        int b = num/100 % 10;
        int c = num/10 % 10;
        int d = num%10;

        if(a!=b && a!=c && a!= d && b!=c && b!=d && c!=d){
            break;
        }
    }

    cout<<num<<endl;

    return 0;
}