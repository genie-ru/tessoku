#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n;
    cin >> n;  // 入力を受け取る
    bitset<10> b(n);  // 2進数表現に変換する
    cout << b.to_string() << endl;  // 結果を出力する
    return 0;
}
