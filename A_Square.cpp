#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    int side;
    while(t--){
        int x1, x2, x3, x4;
        int y1, y2, y3, y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

        int side;

        if(x1!=x2){
            side = max(x1,x2) - min(x1,x2);
        }else if(x1!=x3){
            side = max(x1,x3) - min (x1, x3);
        }

        cout<<side*side<<endl;
    }
    return 0;
}