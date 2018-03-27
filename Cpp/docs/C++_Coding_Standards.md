# C++ Coding Standards :warning::construction:

We based our coding standards on the [C++ Core Guidelines](https://google.github.io/styleguide/cppguide.html) with a few changes.


[Contents](#Contents) shows the items covered in this document.


You can find [more useful stuff](#More-useful-stuff) in the end


## Contents
* Naming
	* General Information
	* Case
	* Files
* Format
	* Indenting

## Naming

### General Information
- Naming (variables, functions, etc.), according to the scope, need to have meaningful, distinct and full names (not abbreviated)
- Abbreviations accepted: `T` for Template; `i` and `j` for iteration variables declared inside a loop; `iter` for pointer iterators inside a loop

### Case
#### Snake case `snake_case`
- Snake case `snake_case` (separate names with underscore `_`) will be used to set **variable**, **function** and **file** names


#### Camel Case `CamelCase`
- Camel case `CamelCase`(no space ) will be used to set **classes**, **structs**, **type aliases** and **enums**

#### Majuscule
- Constant **const**,  **constexpr** and **enum** are all written in majuscule

### Files
- Files are written in lowercase with the following extensions: source `.cpp`, test `_test.cpp` and headers `.hpp`
- Source, Header and Test files have the same hierarchical path and use the same name, differing only by the extension and the addition of `_test` in test files

## Formatting

### Indenting
Use soft tabs that are 4 spaces long.


## More useful stuff :books:
What we believe (and where we are at) to be a non-extensive list of [C++ FOUNDATIONS](https://github.com/commit2gaming/CppFoundation/tree/master/Cpp/FOUNDATIONS.md).
See how this repo can be
[USEFUL](https://github.com/commit2gaming/CppFoundation/tree/master/Cpp/docs/USEFUL.md).

Would like to give your *contribution to open-source code*?
Read the  [CONTRIBUTE](https://github.com/commit2gaming/CppFoundation/tree/master/Cpp/docs/CONTRIBUTE.md) guide.
Our
[C++ Coding Standards](https://github.com/commit2gaming/CppFoundation/tree/master/Cpp/docs/C++_CODING_STANDARD.md) and
[CONDUCT](https://github.com/commit2gaming/CppFoundation/tree/master/Cpp/docs/CONDUCT.md) code will provide some important information.
