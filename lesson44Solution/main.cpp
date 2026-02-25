#pragma once
#include<iostream>
#include<string>

using namespace std; 

bool search_binary(int array[10], int length,int value) {
	int first = 0;
	int last = length - 1;
	while (first<=last) {
		int mid = (first + last) / 2;
		if (array[mid]==value){
			return true;
		}
		else if(array[mid] > value){
			first = mid + 1;
		}
		else {
			last = mid + 1;
		}
	}
	return false;
}

int main() {
	int array[]{1,2,3,4,5,6,7,8,9,10};
	int length{10};

	int value = 7;

	cout << "does value exist? - ";
	cout << (search_binary(array, length,value) ? "yes" : "no")<<endl;

	return 0;
}

