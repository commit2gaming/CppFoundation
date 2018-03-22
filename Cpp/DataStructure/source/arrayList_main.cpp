#include <iostream>

#ifndef ARRAYLIST_hpp
#include "../include/arrayList.hpp"
#endif

using namespace std;

int main(void) {

	arrayList<int> arr;
	// arr = {}

	std::cout << "Array size after creation: " << arr.size() << std::endl;

	if (!arr.contains(5))
		std::cout << "Array do not contains 5" << std::endl;

	for (int i = 0; i != 10; ++i)
		arr.append(i*i);
	// arr = {0 1 4 9 16 25 36 49 64 81}

	if (arr.size() > 0)
		arr.printArray();

	std::cout << "Lets append -16" << std::endl;
	arr.append(-16);
	arr.printArray();
	// arr = {0 1 4 9 16 25 36 49 64 81 -16}

	std::cout << "Lets set 25 into positions 2 and 8" << std::endl;
	arr.set(25, 2);
	arr.set(25, 8);
	// arr = {0 1 25 9 16 25 36 25 81 -16}
	arr.printArray();

	std::cout << "Adding -25 to index 4 increases its size" << std::endl;
	arr.addToIndex(-25, 4);
	// arr = {0 1 25 9 -25 16 25 36 49 25 81 -16}

	arr.printArray();

	std::cout << "Erasing an element (10) does the oposite" << std::endl;
	arr.erase(10);
	arr.printArray();
	// arr = {0 1 25 9 -25 16 25 36 49 25 -16}

	std::cout << "Searching for the first and last indexes of 25" << std::endl;
	cout << "1st: " << arr.indexOf(25) <<
		"\t last: " << arr.
		lastIndexOf(25) << std::endl;

	std::cout << "Getting 3rd element " << *arr.get(3) << std::endl;
	arr.printArray();

	std::cout << "Removing element 9 " << std::endl;
	arr.remove(9);
	arr.printArray();

  return 0;
}
