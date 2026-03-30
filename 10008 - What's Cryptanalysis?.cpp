#include <iostream>   // 提供 cin/cout，負責標準輸入輸出
#include <string>     // 提供 string 與 getline，方便整行讀取文字
#include <vector>     // 提供 vector 動態陣列，這裡用來存 26 個字母統計
#include <algorithm>  // 提供 sort 排序演算法
#include <cctype>     // 提供 isalpha/toupper，做字元判斷與大小寫轉換

using namespace std;

struct letter {
    char word;
    int count;
};
// 你原本常見錯法：struct letter { ... }
// 正確寫法：      struct letter { ... };   <- 結尾一定要有分號

bool compare(letter a, letter b) {
    if (a.count != b.count) {
        return a.count > b.count; // 次數多的在前
    }
    return a.word < b.word; // 次數相同時，字母小的在前 (A < B)
    // 你原本錯法：return a.word > b.word; 會讓 Z 排在 A 前面
}

int main() {
    vector<letter> dic(26);

    for (int i = 0; i < 26; i++) {
        dic[i].word = 'A' + i;
        dic[i].count = 0;
    }

    int n = 0;
    if (!(cin >> n)) return 0;
    
    // 你原本可能遇到的坑：cin >> n 後直接 getline，第一行會讀到空字串
    // 正確做法：先吃掉上一行留下的換行符號
    string dummy;
    getline(cin, dummy);

    while (n--) {
        string s;
        getline(cin, s);

        for (char c : s) {
            if (isalpha(c)) {
                char upper = toupper(c);
                dic[upper - 'A'].count++;
            }
        }
    }

    // 你原本錯法：sort(dic.begin(), dic.end(), compare(dic));
    // 正確寫法：只傳函式名稱 compare（不加括號）
    sort(dic.begin(), dic.end(), compare);

    for (int i = 0; i < 26; i++) {
        // 你原本錯法：if(dic.count > 0) / cout << dic.word ...
        // 正確寫法：必須指定 index -> dic[i].count、dic[i].word
        if (dic[i].count > 0) {
            cout << dic[i].word << " " << dic[i].count << endl;
        }
    }
    
    return 0;
}