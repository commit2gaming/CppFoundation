#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "arrayList.hpp"

arrayList<int> arr;

TEST_CASE( "Array is created", "[arrayList]" ) {
	// arr = {}
    REQUIRE( arr.size() == 0 );
	REQUIRE( arr.contains(2) == false );
	REQUIRE( arr.lastIndexOf(25) == -1 );
	REQUIRE( arr.get(4) == nullptr );

	for (int i = 0; i != 10; ++i)
		arr.append(i*i);
	// arr = {0 1 4 9 16 25 36 49 64 81}

	REQUIRE( arr.size() == 10 );
	REQUIRE( arr.contains(-25) == false );
	REQUIRE( arr.contains(16) == true );
	REQUIRE( arr.indexOf(25) == 5 );
	REQUIRE( arr.lastIndexOf(25) == 5 );
	REQUIRE( *arr.get(4) == 16 );

	arr.addToIndex(25, 2);
	// arr = {0 1 25 4 9 16 25 36 49 64 81}

	arr.set(25, 8);
	// arr = {0 1 25 4 9 16 25 36 25 64 81}

	REQUIRE( arr.size() == 11 );
	REQUIRE( arr.contains(-25) == false );
	REQUIRE( arr.contains(16) == true );
	REQUIRE( arr.indexOf(25) == 2 );
	REQUIRE( arr.lastIndexOf(25) == 8 );

}
