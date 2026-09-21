#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main(){

    string s;
    int cnt=0; //計數器

    while(getline(cin,s)){
        cnt = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '"'){
                if(cnt%2==0){
                    cout << "``";
                }
                else{
                    cout << "''";
                }
                cnt+=1;
            }
            else{
                cout << s[i];
            }
        }
        cout << '\n';
    }
}