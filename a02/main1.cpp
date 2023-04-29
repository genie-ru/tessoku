#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    bool ans = false;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == x) {
            ans = true;
            break;
        }
    }
    if (ans) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}
