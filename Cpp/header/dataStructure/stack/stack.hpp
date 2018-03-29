#ifndef GUARD_STACK_hpp
#define GUARD_STACK_hpp

#include <cstdlib>		// enables nullptr
#include <iostream>

template <class T>
class Stack {
private:
	struct Node {
		Node *next;
		T data;
	};
	Node *top_node;

public:
	// 		constructor / destructor
	Stack();				// default constructor
	~Stack();				// default destructor

	//		accessors		//
	bool empty();			// TRUE if stack is empty
	int size();				// number of elements
	T top();				// return data in top of stack
	void print_stack();		// prints stack top to bottom

	//		modifiers		//
	void push(const T data);	// creates a node with data
	T pop();				// returns element on top and destoys the node
};

// Constructors / Destructor
// default constructor
template <class T>
Stack<T>::Stack() {
	top_node = nullptr;
}

// default destructor
template <class T>
Stack<T>::~Stack() {
	while(!empty())
		pop();
}

//		accessors		//
// TRUE if stack is empty
template <class T>
bool Stack<T>::empty() {
	return top_node == nullptr;
}

// number of elements
template <class T>
int Stack<T>::size() {
	int size = 0;
	Node *count = top_node;

	while (count != nullptr) {
		count = count->next;
		++size;
	}

	return size;
}

// return data in top of stack
template <class T>
T Stack<T>::top() {
	if (!empty())
		return top_node->data;

	std::cout << "There is no element to access on stack" << std::endl;
	exit(1);
}

// prints stack top to bottom
template <class T>
void Stack<T>::print_stack() {
	std::cout << "Stack => ";
	if (empty()) {
		std::cout << "EMPTY" << std::endl;
	} else {
		Node *print = top_node;

		while(print->next != nullptr) {
			std::cout << print->data << " -> ";
			print = print->next;
		}
	std::cout << print->data << std::endl;
	}
	return;
}

//		modifiers		//
// creates a node with <object>
template <class T>
void Stack<T>::push(const T obj) {
	Node *temp = new Node;
	temp->data = obj;
	temp->next = top_node;
	top_node = temp;
}

// returns element on top and destoys the node
template <class T>
T Stack<T>::pop() {
	if (empty()) {
		std::cout << "Cannot pop from empty stack" << std::endl;
		exit(1);
	}

	T top_data = top_node->data;

	Node *old_top = top_node;
	top_node = old_top->next;
	delete old_top;

	return top_data;
}

#endif
