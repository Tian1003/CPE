#include<iostream>
#include<string>                // string 型別（country、key）
#include<map>                   // map 容器會根據鍵值來進行排序
using namespace std;
int main(){
    
    int n;
    string country;
    string key;               //人員名單
    map<string,int>m;
    
    
    cin>>n;
    
    while (n--){
        cin>>country;          //讀入第一個字串。直到有空格為止
        m[country]++;          //與country 同名的鍵值 +1
        getline(cin,key);      // “取得” 後面空格後的名字
                  
    }
    

    
    // const: 唯讀，避免在迴圈中改到 map 元素
    // auto: 讓編譯器自動推斷型別（這裡會是 pair<const string, int>）
    // &: 參考(reference)，不複製元素，效率較好
    // : m 可理解成「in m」，代表依序走訪 m 的每個元素
    for (const auto & s : m)
        cout << s.first << " " << s.second << "\n";

}

