#include <iostream>

void RemoveNum(int SIZE, int *array, int rnum) {

	int quantity = 0;
	std::cout << "\nOriginal array:" << std::endl;
	for (int i = 0; i < SIZE; ++i) {
		if (*(array + i) != rnum) {
			++quantity;
		}
		std::cout << *(array + i) << " ";
	}
	int x = 0;
	int *array2 = new int[quantity];
	std::cout << "\nModified array:" << std::endl;
	
	for (int i = 0; i < SIZE; ++i) {
		if ((*(array + i)) != rnum) {
			*(array2 + x) = *(array + i);
			std::cout << *(array2 + x) << " ";
			++x;
		} 
		
	}
	delete array2;
	array2 = nullptr;
}
int main(){
	int SIZE = 0;
	int rnum = 0;
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

	std::cout << "\nPress enter number for delete" << std::endl;
	std::cin >> rnum;
	while (std::cin.fail()) {
			std::cout << "invalid input, press enter a integer" << std::endl;
			std::cin.clear();
			std::cin.ignore();
			std::cin >> rnum;
		}

	RemoveNum(SIZE, array, rnum);

	delete [] array;
	array = nullptr;
	

	return 0;
}
