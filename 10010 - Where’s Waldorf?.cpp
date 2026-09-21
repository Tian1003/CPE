#include<iostream>
#include<string>
#include<cctype>

using namespace std;

char grid[55][55];

// 橫向與縱向的 8 個位移
int dr[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dc[] = {-1,  0,  1, -1, 1, -1, 0, 1};

// 在 (r, c) 這個點，嘗試往 8 個方向比對 key
bool find(string key, int r, int c, int maxR, int maxC) {
    // 1. 跑 8 個方向
    for (int dir = 0; dir < 8; dir++) {
        int curR = r;
        int curC = c;
        bool match = true;

        // 2. 從單字的第 1 個字開始比對 (key[0] 在外面已經比過了，所以從 k=0 開始也行)
        for (int k = 0; k < key.length(); k++) {
            // 先檢查是否出界！這是最重要的一步
            if (curR < 0 || curR >= maxR || curC < 0 || curC >= maxC) {
                match = false;
                break;
            }

            // 檢查字母是否相同
            if (grid[curR][curC] != key[k]) {
                match = false;
                break;
            }

            // 往該方向踏出下一步
            curR += dr[dir];
            curC += dc[dir];
        }

        // 如果這個方向走到底都沒斷掉，代表找到了！
        if (match) return true;
    }
    return false;
}


int main(){
    int num;
    cin >> num; 
    while(num--){
        int row, col; //列 左右  行 垂直
        cin >> row >> col;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                char letter;
                cin >> letter;
                grid[i][j]=tolower(letter);
            }
        }

        int k; //尋字次數
        cin >> k;
        while(k--){

            string key;
            cin >> key; // 如果是 getline(cin ,key) 前面需要 cin.ignore() 不然會知道 cin >> k 的 /n 換行

            for(int i=0;i<key.length();i++){
                key[i] = tolower(key[i]);
            }

            bool found = false;
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    if (grid[i][j] == key[0]) {
                        if (find(key, i, j, row, col)) {
                            cout << i + 1 << " " << j + 1 << endl; // 座標從 1 開始
                            found = true;
                            break; // 跳出內層 j 迴圈
                        }
                    }
                }
                if (found) break; // 跳出外層 i 迴圈
            }

        }
        


    }


}