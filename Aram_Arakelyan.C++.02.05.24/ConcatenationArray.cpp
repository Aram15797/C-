#include <iostream>

void  ConcatenationArray(int SIZE, int *array, int conc) {

	int quantity = 0;
	std::cout << "\nOriginal array:" << std::endl;
	for (int i = 0; i < SIZE; ++i) {
		std::cout << *(array + i) << " ";
	}

	int x = 0;
	int *array2 = new int[SIZE * conc];
	std::cout << "\nModified array:" << std::endl;

	for (int i = 0; i < SIZE * conc; ++i) {
		*(array2 + i) = *(array + x);
		++x;
		if (x == SIZE){
			x = 0;
		}
		std::cout << *(array2 + i) << " ";	
	}
	delete array2;
	array2 = nullptr;
}
int main(){
	int SIZE = 0;
	int conc = 0;
	std::cout << "Press enter size of array" << std::endl;
	std::cin >> SIZE;
	while (std::cin.fail()) {
			std::cout << "invalid input, press enter a positive integer" << std::endl;
			std::cin.clear();
			std::cin.ignore();
			std::cin >> SIZE;
		}

	int *array = new int[SIZE];
	for (int i = 0; i < SIZE; ++i) {
		std::cout << "Press enter element of array N=" << i +1 <<std::endl;
		std::cin >> *(array + i);
		while (std::cin.fail()) {
			std::cout << "invalid input, press enter a integer" << std::endl;
			std::cin.clear();
			std::cin.ignore();
			std::cin >> *(array + i);
		}
	}

	std::cout << "\nPress enter a concatenation count" << std::endl;
	std::cin >> conc;
	while (std::cin.fail()) {
			std::cout << "invalid input, press enter a integer" << std::endl;
			std::cin.clear();
			std::cin.ignore();
			std::cin >> conc;
		}

	ConcatenationArray(SIZE, array, conc);

	delete [] array;
	array = nullptr;
	

	return 0;
}
