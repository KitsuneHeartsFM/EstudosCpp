#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

int main() {
    srand(time(0));

    int russianRoulette = (rand() % 6) + 1;

    if (russianRoulette == 1) {
        cout << "You died!" << endl;
    } else {
        cout << "Lucky bastard..." << endl;
    }

    return 0;
}