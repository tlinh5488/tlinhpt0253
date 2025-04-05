#include <iostream>
#include <cctype>

using namespace std;

int countLetters(char a, char b) {

    a = tolower(a);
    b = tolower(b);

  
    if (a < 'a' || a > 'z' || b < 'a' || b > 'z') {
        return -1;
    }


    if (a > b) {
        swap(a, b);
    }


    return b - a + 1;
}

int main() {
    char a, b;

    cin >> a;

    cin >> b;

    int count = countLetters(a, b);

    if (count != -1) {
        cout <<  count ;
    }

    return 0;
}
