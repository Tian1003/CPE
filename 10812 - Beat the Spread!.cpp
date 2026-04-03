#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int s,d;
        cin >> s >> d;
        //s=x+y
        //d=x-y
        if( (x+y)%2!=0 || s < d){
            cout << "impossible" << endl;
        }
        else{
            cout << (s+d)/2 << " " << (s-d)/2 << endl;
        }
    }

}