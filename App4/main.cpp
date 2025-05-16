#include <iostream>

using std::cout;
using std::endl;

int primeLoop(int number) {
    int x = 0;

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            x++;
        }
    }

    return x;
}

bool isPrimeNumber(int number) {
    bool result;
    int aux = primeLoop(number);

    if (number < 2) {
        result = false;
    } else if (number == 2) {
        result = true;
    } else if (number % 2 == 0) {
        result = false;
    } else if (aux == 2) {
        result = true;
    } else {
        result = false;
    }

    return result;
}

int main() {
    for (int i = 1; i <= 100; i++) {
        if (isPrimeNumber(i)) {
            cout << i << endl;
        }
    }

    return 0;
}