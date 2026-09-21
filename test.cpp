#include <iostream>

using namespace std;

long long fun(long long n){
    int temp=0; 
    while(n!=0){ 
        temp = temp + (n%10)*(n%10); //
        n = n /10; //0
    }
    return temp;
}


int main(){
    int n =0;
    cin >> n;
    for(int i=1;i<=n;i++){
        long long num;
        cin >> num; //7
        long long sum = fun(num); //49

        while(sum>=10){
            sum = fun(sum); //97 
        }
        
        if(sum == 1 || sum == 7){
            cout << "Case #" << i << ": " << num << " is a Happy number." << endl;
        }
        else{
            cout << "Case #" << i << ": " << num << " is a Unhappy number." << endl;
        }
        
    }
}