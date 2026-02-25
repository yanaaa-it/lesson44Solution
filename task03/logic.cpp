#include"logic.h"

int cout_non_zero_element(int array[DEFAULT_SIZE], int length) {
	int count = 0;
	for (int i = length-1; i < length; i++)
	{
		if (array[i] != 0) {
			count++;
		}
	}

	return count;
}