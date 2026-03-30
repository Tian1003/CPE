#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        if(n==0){break;}
        if(n%11==0){
            cout << n << " is a multiple of 11."<< '\n';
        }
        else{
            cout << n << " is not a multiple of 11." << '\n';
        }
    }
}