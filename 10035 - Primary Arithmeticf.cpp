#include<iostream>
using namespace std;

int main(){
    int a,b;
    while (cin >> a >> b) {
        
        if (a==0 && b==0) {break;} //兩者皆為 0 跳出
        
        int carry = 0;
        int sum = 0;
        
        while (a || b) {
            
            if(a%10 + b%10 + carry >= 10){
                carry=1;
                sum+=1;
            }
            else{
                carry =0;
            }
            
            a=a/10;
            b=b/10;
        
        }
        
        
        if(sum==0){
            cout << "No carry operation.";
        }
        else if (sum==1){
            cout <<"1 carry operation.";
        }
        else{
            cout << sum << " carry operations.";
        }
        
        cout << '\n';
        
    }
}

