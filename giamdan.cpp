#include <iostream>
using namespace std;

int main() {
    int a, b, c, max, mid, min;

    cin >> a >> b >> c;

    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    mid = a + b + c - max - min;
    cout << max << " " << mid << " " << min << endl;

    return 0;
}

