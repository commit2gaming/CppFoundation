# ################################################
# COMPILATION DIRECTIVES
# ################################################
# # compiler definition
CXX = g++

# c++ version
CXXFLAGS += -std=c++14

# warning flags
CXXFLAGS += -Wall -Wextra -pedantic-errors

# include test headers
INCLUDES += -Iinclude
# search automatically for all project headers
INCLUDES += $(patsubst %, -I%, $(wildcard header/*/*))

# ################################################
# SPECIAL TARGETS
# ################################################
# keep intermediate object files after compilation
.SECONDARY: $(OBJECTS)

# prevent printing of recipes
.SILENT:

# ################################################
# PATHS: SOURCES, HEADERS, LIBRARIES, ETC
# ################################################
SOURCES := $(wildcard source/*/*/*.cpp)
DEPENDENCIES := $(patsubst source/%.cpp, build/%.d, $(SOURCES))
DIRS := $(patsubst source/%, %, $(wildcard source/*/*))
EXECUTABLES := $(patsubst source/%.cpp, bin/%, $(SOURCES))
OBJECTS := $(patsubst source/%.cpp, build/%.o, $(SOURCES))

TEST_SOURCES := $(wildcard test/*/*/*.cpp)
TEST_DEPENDENCIES := $(patsubst test/%.cpp, build/%.d, $(TEST_SOURCES))
TEST_DIRS := $(patsubst test/%, %, $(wildcard test/*/*))
TEST_EXECUTABLES := $(patsubst test/%.cpp, bin/%, $(TEST_SOURCES))
TEST_OBJECTS := $(patsubst test/%.cpp, build/test/%.o, $(TEST_SOURCES))

# ################################################
# PROGRAM COMPILATION AND LINKAGE
# ################################################
.PHONY: all
all: dirs $(EXECUTABLES)
	@echo binaries under:
	@echo $(EXECUTABLES)

.PHONY: dirs
dirs:
	mkdir -p $(patsubst %, build/%, $(DIRS))
	mkdir -p $(patsubst %, bin/%, $(DIRS))

# compilation
$(OBJECTS): $(SOURCES)
	$(CXX) -c $(CXXFLAGS) $(INCLUDES) -o $@ $<

# linkage
$(EXECUTABLES): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $<

# ################################################
# TESTS COMPILATION AND LINKAGE
# ################################################
.PHONY: test
test: test_dirs $(TEST_EXECUTABLES)
	@echo test binaries under:
	@echo $(TEST_EXECUTABLES)

.PHONY: test_dirs
test_dirs:
	mkdir -p $(patsubst %, build/test/%, $(TEST_DIRS))
	mkdir -p $(patsubst %, bin/%, $(TEST_DIRS))

# compilation
$(TEST_OBJECTS): $(TEST_SOURCES)
	$(CXX) -c $(CXXFLAGS) $(INCLUDES) -o $@ $<

# linkage
$(TEST_EXECUTABLES): $(TEST_OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $<

# ################################################
# TESTS COMPILATION AND LINKAGE
# ################################################
.PHONY: clean
clean:
	rm -f \
		$(OBJECTS) $(TEST_OBJECTS)\
		$(DEPENDENCIES) $(TEST_DEPENDENCIES)

.PHONY: help
help:
	@echo available targets: all clean test
