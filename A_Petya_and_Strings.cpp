#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    string first;
    string second;
    int sum1= 0, sum2 = 0;
    cin>>first>>second;
    transform(first.begin(), first.end(), first.begin(), ::toupper);
    transform(second.begin(), second.end(), second.begin(), ::toupper);
   
    if(first==second){
        cout<<0<<endl;
    }
    else if(first<second){
        cout<<-1<<endl;
    }
    else{
        cout<<1<<endl;
    }
    
    return 0;
}