#ifndef CATCH_CONFIG_MAIN
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#endif

#include "catch.hpp"
// #include "../../../include/catch.hpp"
// #include "../../../header/dataStructure/stack/stack.hpp"
#include "stack.hpp"

Stack<double> *stack_double = new Stack<double>();
Stack<std::string> *stack_string = new Stack<std::string>();

TEST_CASE( "Stack<double> is created", "[stack]" ) {
	// s => EMPTY
    REQUIRE( stack_double->size() == 0 );
    REQUIRE( stack_double->empty() == 1 );

	stack_double->push(11);
	REQUIRE( stack_double->size() == 1 );
    REQUIRE( stack_double->empty() == 0 );
    REQUIRE( stack_double->top() == 11 );
    REQUIRE( stack_double->pop() == 11 );
	REQUIRE( stack_double->size() == 0 );
    REQUIRE( stack_double->empty() == 1 );

	for (int i = 0; i != 10; ++i)
		stack_double->push(i*i);
	REQUIRE( stack_double->size() == 10 );
    REQUIRE( stack_double->empty() == 0 );
    REQUIRE( stack_double->top() == 81 );
    REQUIRE( stack_double->pop() == 81 );
	REQUIRE( stack_double->top() == 64 );

}

TEST_CASE( "Stack<string> is created", "[stack]" ) {
	// s => EMPTY
    REQUIRE( stack_string->size() == 0 );
    REQUIRE( stack_string->empty() == 1 );

	stack_string->push("onion");
	REQUIRE( stack_string->size() == 1 );
    REQUIRE( stack_string->empty() == 0 );
    REQUIRE( stack_string->top() == "onion" );
    REQUIRE( stack_string->pop() == "onion" );
	REQUIRE( stack_string->size() == 0 );
    REQUIRE( stack_string->empty() == 1 );

	stack_string->push("garlic");
	stack_string->push("cheese");
	stack_string->push("ham");
	stack_string->push("buns");
	stack_string->push("hamburger");
	REQUIRE( stack_string->size() == 5 );
    REQUIRE( stack_string->empty() == 0 );
    REQUIRE( stack_string->top() == "hamburger" );
    REQUIRE( stack_string->pop() == "hamburger" );
	REQUIRE( stack_string->top() == "buns" );

}
