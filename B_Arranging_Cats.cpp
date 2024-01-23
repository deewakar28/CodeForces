#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int count1 = 0, count2=0;

        string s;
        cin>>s;
        string f;
        cin>>f;

        for(int i=0; i<n; i++){
            if(s[i]=='0' && f[i]=='1'){
                count1++;
            }
            else if(s[i]=='1' && f[i]=='0'){
                count2++;
            }
        }

        cout<<max(count1, count2)<<endl;
    }
    return 0;
}