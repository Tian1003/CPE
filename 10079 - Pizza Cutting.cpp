#include <iostream>

using namespace std;

int main(){
    long long n=0;

    while(cin>> n && n>=0){
        long long ans = n*(n+1) / 2+1;
        cout << ans << endl;
    }

}