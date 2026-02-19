#include <iostream>
#include <vector>
#include <algorithm> // 記得補上這個，sort 才能跑
using namespace std;

int main(){
    int T, r, temp;
    cin >> T;
    while(T--){
        vector<int> v;
        int MID=0, SUM=0;
        cin >> r;
        for(int i=0;i<r;i++){
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        MID = v[r/2];
        for(int i=0;i<v.size();i++){
            SUM=SUM+abs(MID-v[i]);
        }
        cout << SUM << '\n';
    }
}