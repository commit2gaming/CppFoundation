#ifndef ARRAYLIST_hpp
#define ARRAYLIST_hpp

#include <algorithm>
#include <cstddef>
#include <iostream>

static const int minArraySize = 2;

template <class T>
class arrayList {
public:
	// constructor / destructor
	arrayList();					// default constructor
	~arrayList();					// destructor

	// accessors
	int size();				// return number of elements in array
	void printArray();				// print array elements
    bool contains(const T);			// TRUE if <object> belongs to array
    int indexOf(const T);	// index of 1st occurence of <object>
    int lastIndexOf(const T);	// index of last occurence of <object>
    T * get(const int);		// get element in <position>

	// 		modifiers		//
    // add <object> to last position
	void append(const T);
    // add <object>, to <position>
	void addToIndex(const T, const int);
    // set <object> in <position>
	void set(const T, const int);
    // erase element in <position>
	void erase(const int);
    // remove first occurence of element in <array>
	void remove(const T);

private:
	T *data;						// first element in array
	int nbElements;			// (one-past) number of elements
	int mmrAllocated;		// (one-past) allocated memory

	// memory management
	void grow();					// manage array size

};

// constructor and destructor
// default constructor
template <class T>
arrayList<T>::arrayList() {
	data = new T[minArraySize];
	nbElements = 0;
	mmrAllocated = minArraySize;
}

// destructor
template <class T>
arrayList<T>::~arrayList() {
	delete[] data;
}

// accessors
// return number of elements in array
template <class T>
int arrayList<T>::size() {
	return nbElements;
}

// print array elements
template <class T>
void arrayList<T>::printArray() {
	if (size() > 0) {
		std::cout << "Array = { " << data[0];
		for (int i = 1; i != nbElements; ++i) {
			std::cout << ", " << data[i];
		}
		std::cout << " }" << std::endl;
	} else {
		std::cout << "Array is empty!" << std::endl;
	}
}

// TRUE if <object> belongs to array
template <class T>
bool arrayList<T>::contains(const T obj) {
	for (int i = 0; i != nbElements; ++i)
		if (data[i] == obj)
			return true;

	return false;
}

// index of 1st occurence of <object>
template <class T>
int arrayList<T>::indexOf(const T obj) {
	if (this->size() == 0)
		return -1;

	for (int i = 0; i != nbElements; ++i)
		if (data[i] == obj)
			return i;

	return -1;
}

// index of last occurence of <object>
template <class T>
int arrayList<T>::lastIndexOf(const T obj) {
	if (size() == 0)
	 	return -1;

	int i = nbElements;
	do {
		--i;
		if (data[i] == obj)
			return i;

	} while(i != 0);
	return -1;
}

// get element in <position>
template <class T>
T * arrayList<T>::get(const int pos) {
	if (pos < 0 || pos >= nbElements)
		return nullptr;

	return &data[pos];
}

// 		modifiers		//
// add <object> to last position
template <class T>
void arrayList<T>::append(const T obj) {
	if (nbElements == mmrAllocated)
		grow();

	data[nbElements++] = obj;
}

// add <object>, to <position>
template <class T>
void arrayList<T>::addToIndex(const T obj, const int pos) {
	if (pos < 0 || pos >= nbElements)
		return;

	if (nbElements == mmrAllocated)
		grow();

	for (int i = nbElements; i != pos; --i)
		data[i] = data[i - 1];

	data[pos] = obj;
	++nbElements;
}

// set <object> in <position>
template <class T>
void arrayList<T>::set(const T obj, const int pos) {
	if (pos < 0 || pos > nbElements)
		return;

	if(pos == nbElements) {
		if (nbElements == mmrAllocated)
			grow();

		data[nbElements++] = obj;
	}

	data[pos] = obj;
}

// erase element in <position>
template <class T>
void arrayList<T>::erase(const int pos) {
	if (pos < 0 || pos >= nbElements)
		return;

	--nbElements;

	for (int i = pos; i != nbElements; ++i)
		data[i] = data[i + 1];
}

// remove first occurence of element in <array>
template <class T>
void arrayList<T>::remove(const T obj) {
	std::cout << "indexOf(obj)" << indexOf(obj) << std::endl;
	if (indexOf(obj) == -1)
		return;

	this->erase(indexOf(obj));
}

// increase memory allocation if array needs to grow
template <class T>
void arrayList<T>::grow() {
	// determine newSize
	mmrAllocated *= 2;

	// allocate memory
	T *newData = new T[mmrAllocated];

	// copy oldArray into newArray
	for (int i = 0; i != mmrAllocated; ++i) {
		newData[i] = data[i];
	}

	// // delete oldArray
	delete[] data;

	// set variables
	data = newData;
}

#endif
