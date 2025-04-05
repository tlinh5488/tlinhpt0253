#include <iostream>
#include <iomanip>

using namespace std;

double tinh_toan(double a, char phep_toan, double b) {
    switch (phep_toan) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b == 0) {
                cout << "ze";
                return 0; 
            } else {
                return a / b;
            }
        default:
            cout << "ze";
            return 0;
    }
}

int main() {
    double a, b;
    char phep_toan;

    cin >> a >> phep_toan >> b;

    double ket_qua = tinh_toan(a, phep_toan, b);

    if (ket_qua != 0) { 
        cout << fixed << setprecision(3) << ket_qua ;
    }

    return 0;
}

