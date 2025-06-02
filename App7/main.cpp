#include <iostream>

using std::cout;
using std::endl;

namespace firstArray {
	int array[10] = {9, 3, 2, 5, 6, 10, 4, 8, 7, 1};
}

int before() {
	using namespace firstArray;

	cout << "Before: ";
	for (int i = 0; i < 10; i++) {
		cout << array[i];
		if (i != 9) {
			cout << ", ";
		}
	}
	cout << endl;

	return 0;
}

int bubbleSort(int array[]) {
	for (int i =0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (array[i] < array[j]) {
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	return 0;
}

int after() {
	using namespace firstArray;

	bubbleSort(array);

	cout << "After: ";
	for (int i = 0; i < 10; i++) {
		cout << array[i];
		if (i != 9) {
			cout << ", ";
		}
	}
	cout << endl;

	return 0;
}

int main() {
	before();
	after();

	return 0;
}