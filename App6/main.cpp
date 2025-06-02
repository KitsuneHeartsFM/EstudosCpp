#include <iostream>
#include <ctime>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

using std::round;

int main () {
	srand(time(NULL));
	int number = rand() % 100;
	int guess;
	int tries = 0;

	cout << "Guess the number!\n\n";


	do {
		cout << "-> ";
		cin >> guess;
		cout << '\n';
		tries++;

		if (guess > number) {
			cout << "Guess is higher than the number!\n";
		} else if (guess < number) {
			cout << "Guess is lower than the number!\n";
		} else {
			cout << "You got the number right!\n";
			cout << "Number of tries: " << tries << endl;
		}
	} while (guess != number);

	return 0;
}