#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;

using std::string;
using std::getline;

int main() {
    int letterCount;
    string input;

    cout << "Insert phrase here: ";
    getline(cin, input);
    cout << '\n';

    letterCount = input.length();

    cout << "Your phrase has " << letterCount << " letters!" << endl;

    return 0;
}