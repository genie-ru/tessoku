#include <iostream>
using namespace std;

int main()
{
    bool ans = false;
    int n, x;
    cin >> n >> x;
    int A[109];
    for (int i = 1; i <= n; i++) cin >> A[i];

    for (int i=1; i <= n; i++) {
        if (A[i] == x) ans = true; 
    }
    if (ans == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;

}