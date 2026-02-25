#include"util.h"

int main() {
	int array[DEFAULT_SIZE];
	int length;

	do {
		system("cls");
		cout << "input the size of array:";
		cin >> length;
	} while (length <= 0);
	int number;

	cout << "Input your number:";
	cin >> number;


	init_random(array, length, 0, 100);

	print("array:\n");
	print(convert(array, length));

	print("\ncount elements of great number is ");
	print(to_string(cout_elements_great_number(array, length,number)));

	return 0;
}