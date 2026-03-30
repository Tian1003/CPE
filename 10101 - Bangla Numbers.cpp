//23764
//45897458973958



#include <iostream>
using namespace std;

void bangla(long long int num){
    
    if(num>10000000){
        bangla(num/10000000);
        cout << " kuti ";
        num=num%10000000;
    }
    
    if(num/10000000){
        cout << num/10000000 << " kuti ";
        num= num%10000000;
    }
    
    if(num/100000){
        cout << num/100000 << " lakh ";
        num= num%100000;
    }

    if(num/1000){
        cout << num/1000 << " hajar ";
        num= num%1000;
    }
    
    if(num/100){  // num/100 != 0
        cout << num/100 << " shata ";
        num= num%100;
    }
    
    if(num!=0){
        cout << num << " \n ";
    }

}



int main(){
    long long int n;
    int c=0;
    
    while (cin >> n) {
        c+=1;
        cout << "  " << c << ". ";
        
        if(n==0){
            cout << n << '\n';
        }
        
        else{
            bangla(n);
        }
        
    }
}

