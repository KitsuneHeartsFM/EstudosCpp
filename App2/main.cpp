#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

using std::sqrt;
using std::ceil;

bool detectPerfectSquares(int x) {
    bool returnable = false;

    if (x == 0 && x == 1) {
        returnable = true;
    } else {
        int limit = ceil(sqrt(x));

        for (int i = 0; i <= limit; i++) {
            if (i * i == x) {
                returnable = true;
            }
        }
    }

    return returnable;
}

int main() {
    short int x;

    cout << "Insert a number: ";
    cin >> x;
    cout << '\n';

    if (detectPerfectSquares(x)) {
        cout << x << " is a perfect square number" << endl;
    } else {
        cout << x << " isn't a perfect square number" << endl;
    }

    return 0;
}