#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int gcd = __gcd(a, b); 
    int c = a / gcd; 
    int d = b / gcd;

    cout << c << " " << d;

    return 0;
}

