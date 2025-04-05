#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

int main() {
    double xa, ya, xb, yb;
    cin >> xa >> ya;
    cin >> xb >> yb;
    double AB = sqrt(pow (xb - xa, 2) + pow (yb - ya, 2));
    cout <<  fixed << setprecision (2) << AB ;
    return 0;
}
