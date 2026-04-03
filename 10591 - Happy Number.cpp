#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n; //輸入次數

    for(int i=1;i<=n;i++){
        int num=0;
        cin >> num; //13
        int temp=num; //13
        int sum = 0;

        while(sum!=1){ 
            sum = 0;
            while(temp!=0){  
                sum = sum + (temp%10)*(temp%10);  
                temp = temp / 10;
            }

            //sum= 10 1
            if(sum<10){
                break;
            }
            temp=sum; //temp= 10
        }


        if(sum==1){
            cout << "Case #"<< i <<": "<< num <<" is a Happy number." << endl;
        }
        else{
            cout << "Case #"<< i <<": "<< num <<" is an Unhappy number." << endl;
        }
        
    }

        
}

