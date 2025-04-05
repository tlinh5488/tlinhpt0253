#include <bits/stdc++.h>

using namespace std;

bool isLargeSum(int x) {

    string xStr = to_string(x);


    for (char digit : xStr) {
        if (digit < '5' || digit > '9') {
            return false;
        }
    }


    if (xStr.length() == 1) {
        return false;
    }


    for (int i = 1; i < xStr.length(); i++) {
        string left = xStr.substr(0, i);
        string right = xStr.substr(i);

 
        bool leftIsLarge = true;
        bool rightIsLarge = true;
        for (char digit : left) {
            if (digit < '5' || digit > '9') {
                leftIsLarge = false;
                break;
            }
        }
        for (char digit : right) {
            if (digit < '5' || digit > '9') {
                rightIsLarge = false;
                break;
            }
        }


        if (leftIsLarge && rightIsLarge && stoi(left) + stoi(right) == x) {
            return true;
        }
    }

    return false;
}

int main() {
    int x;
    cin >> x;

    if (isLargeSum(x)) {
        cout << x << " YES " ;
    } else {
        cout << x << " NO ";
    }

    return 0;
}
