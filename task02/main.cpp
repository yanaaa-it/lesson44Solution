#include"util.h"

int main() {
	int array[DEFAULT_SIZE];
	int length;

	do {
		system("cls");
		cout << "input the size of array:";
		cin >> length;
	} while (length <= 0);

	init_random(array, length, 0, 100);

	print("array:\n");
	print(convert(array, length));

	return 0;
}