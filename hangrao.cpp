#include <iostream>
using namespace std;

int main() {
    long m, n;
    cin >> m;
    cin >> n;

    long perimeter = 2 * (m + n);
    long internalFences = m * (n - 1) + n * (m - 1);
    long totalFenceLength = perimeter + internalFences;

    cout <<  totalFenceLength ;

    return 0;
}
