#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int i, j;
    while(cin >> i >> j){
        int ans = 0;

        for(int k=i;k<=j;k++){
            int n = k;
            int cnt =1;
            while(n>1){
                if(n%2==1){
                    n = n*3+1;
                }
                else{
                    n = n/2;
                }
                cnt++;
            }
            
            if(cnt>ans){
                ans = cnt;
            }
        }
        cout << i << " " << j << " " << ans << '\n';
    }
}
