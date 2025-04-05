#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int count = 0;

    for (int i = 0; i < y; ++i) {
        int day = (x + i) % 7;
        if (day >= 2 && day != 8) {
            count++;
        }
    }
    cout << count ;
    return 0;
}

