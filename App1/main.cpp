#include <iostream>

using std::cout;
using std::endl;
using std::cin;

double sumReturn(double a, double b) {
    return a + b;
}

double subReturn(double a, double b) {
    return a - b;
}

double multReturn(double a, double b) {
    return a * b;
}

double divReturn(double a, double b) {
    return a / b;
}

int main() {
    int a, b, x, y;

    cout << "1. Sum\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";

    cout << "Choose an operation: ";
    cin >> x;
    cout << '\n';

    cout << "Enter A: ";
    cin >> a;
    cout << '\n';

    cout << "Enter B: ";
    cin >> b;
    cout << '\n';

    switch (x) {
        case 1:
            cout << a << " + " << b << " = " << sumReturn(a, b);
            break;
        case 2:
            cout << a << " - " << b << " = " << subReturn(a, b);
            break;
        case 3:
            cout << a << " * " << b << " = " << multReturn(a, b);
            break;
        case 4:
            cout << a << " / " << b << " = " << divReturn(a, b);
            break;
        default:
            cout << x << " is not a valid operation.\n";
            break;
    }

    return 0;
}