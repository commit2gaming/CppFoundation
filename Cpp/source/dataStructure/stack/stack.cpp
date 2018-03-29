#include <cstdlib>
#include <iostream>

#include "stack.hpp"

int main (void) {
	// stack can be int, double, float, string
	// creating stack of doubles
	Stack<double> *s = new Stack<double>();

	std::cout << "A stack of doubles has been created!" << std::endl;

	// stack opperations
	while(std::cin) {
		std::cout << "\nMember functions available:" << std::endl;
		std::cout << "0 for pop" << std::endl;
		std::cout << "1 for push" << std::endl;
		std::cout << "2 for top" << std::endl;
		std::cout << "3 for size" << std::endl;
		std::cout << "4 for empty" << std::endl;
		std::cout << "5 for EXIT" << std::endl;
		int stack_opperation;
		std::cin >> stack_opperation;

		switch (stack_opperation) {
			case 0:
				s->pop();
				break;

			case 1:
				std::cout << "type a data to push: ";
				double push_value;
				std::cin >> push_value;
				s->push(push_value);
				break;

			case 2:
				std::cout << "top element is: " <<
					s->top() << std::endl;
				break;

			case 3:
				std::cout << "stack size is: " <<
					s->size() << std::endl;
				break;

			case 4:
				std::cout << s->empty() << std::endl;
				break;

			default: std::cout << "**** Exiting program ****" << std::endl;
				delete s;
				return 0;
		}

		std::cout << "\n****\n* The current stack is: ";
		s->print_stack();
		std::cout << "****\n";
	}


	delete s;
	return 0;
}
