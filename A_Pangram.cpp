#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int main(){

    int n, count1=0, count2=0;
    cin>>n;

    string s;
    cin>>s;

    vector <int> v(26,0);

    for(int i=0; i<n; i++){
        v[tolower(s[i])-'a'] = 1;
    }
    for (int i = 0; i < 26; ++i)
    {
    	if(!v[i])
    	{
    		cout <<"NO"<<endl;;
    		return 0;
    	}

    }

    cout<<"YES"<<endl;

   
    return 0;
}