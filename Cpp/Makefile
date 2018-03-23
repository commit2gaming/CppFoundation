CXX = g++
CXXFLAGS = -Wall -Werror -g
OBJ = file1 file2 file3 ...

# Using vpath to try and find the files
# vpath %.cpp			source
# vpath %_test.cpp	test
# vpath %.hpp			header
HEADERFILES = $(shell find header/ -name *.hpp)
SOURCEFILES = $(shell find source/ -name *.cpp)
TESTFILES = $(shell find test/ -name *.cpp)

SRC_DIR = ./src
BUILD_DIR = ./build

# Comment


all:
	$(CXX) $(CXXFLAGS) --std=c++11 arrayList_test.cpp

clean:
	rm -rf $(OBJ)
