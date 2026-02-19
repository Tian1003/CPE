#include <iostream>
using namespace std;

int main(){
    long long a, b; // 注意：這題測資很大，要用 long long 喔！
    while (cin >> a >> b) {
        if (a > b) cout << a - b << '\n';
        else cout << b - a << '\n';
    }
    return 0;
}