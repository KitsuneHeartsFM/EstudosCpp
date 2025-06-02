#include <iostream>
#include <ctime>;

using std::cout;
using std::endl;
using std::cin;

int diceRoll() {
	srand(time(NULL));
	int dice = rand() % 6 + 1;
	return dice;
}

int diceRoll (int sides) {
	srand(time(NULL));
	int dice = rand() % sides + 1;
	return dice;
}

int main() {
	char answer;
	int sides;

	do {
		answer = NULL;

		cout << "Insert dice's side count? (The standart value is 6)\n";
		cout << "(Y)es or (N)o: ";
		cin >> answer;

		if (answer == 'n' || answer == 'N') {
			cout << "You've rolled a " << diceRoll() << "!" << endl;
		} else if (answer == 'y' || answer == 'Y') {
			cout << "Insert dice side count: ";
			cin >> sides;
			cout << "You've rolled a " << diceRoll(sides) << "!" << endl;
		} else {
			cout << "Invalid input!" << endl;
		}
	} while (!(answer == 'y' || answer == 'Y' || answer == 'n' || answer == 'N'));

	return 0;
}