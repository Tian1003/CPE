#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    string a,b;
    int countA=0,countB=0; 
    char temp;
    
    while(getline(cin, a) && getline(cin, b)){
        int letter[26]={0};
        
        for(int i=0;i<26;i++){
            countA=count(a.begin(),a.end(),i+97);
            countB=count(b.begin(),b.end(),i+97);

            letter[i]=min(countA,countB);
            
            if(letter[i]!=0){
                for(int j=0;j<letter[i];j++){
                    temp = i+97;
                    cout << temp;
                }
            }
        }
        cout << endl;
        
    }
    
}



