#include <iostream>
using namespace std;

int main() {
    int x;
    int res = 0;
    cin >> x;
    if (x < 50000) {
        res = (x / 100) * 13;
    } else if (x >= 50001 && x <= 100000) {
        res = (x / 100) * 20;
    } else if (x > 100000) {
        res = (x / 100) * 25;
    }
    cout << res << endl;
    return 0;
}