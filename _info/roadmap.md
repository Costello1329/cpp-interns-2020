# Course roadmap


## Block 1: C, C++ 03, C++07

### Intro:
- What is C++
- C++ versions, other related languages
- What is program and how to compile and execute it
- Standart library

### Program structure:
- Alphabet of the language
- Main function
- Using namespace std
- Visibility scope
- Errors:
    - Compilation error
    - Runtime error
    - Undefined behaviour
    - Examples
    - Types of compilation errors: lexical, syntax, sematic
    - segmentation fault
    - stack overflow

### Declarations & Definitions:
- Identifiers
- Variables
- Visibility and life scope
- Fundamental types of data
    - Fixed size types
    - Implicit casts between types
    - Literals
    - Sized
    - Endian
    - Signed and usigned
- Constants:
    - variables
    - operations
    - How to work with constants properly
    - Rule: everything that can be const __must__ be const.
- Functions: declaration vs definition
- One definition rule

### Expressions:
- Operators:
    - Arythmetical operators
    - Сompound assignment operators
    - Bitwise operators
    - Comparison operators
    - Logical operators
    - Operator []
    - Other operators:
        - ternary operator
        - comma operator
        - function call operator
        - :: operator
        - sizeof operator
    - Operator precedence and associativity.
    - Concept of lvalue and rvalue in C ++ 03.
    - Function call operator.
    - Function overload (basics)
    - Passing arguments and returning from functions.
    - Operator static_cast <…> and C-style casting.

### Control sequences:
- If, else, if, else
- Loops: for, while, do while
- Switch/case
- Continue
- Continue
- Return

### Pointers:
- Arrays
- operator[]
- Stack (in memory):
    - grows from top to bottom
    - size
- The unary operator&
- Pointers, how to create them
- Operator*, implementation of operator[] through operator* when working with arrays
- Const pointer VS pointer to const VS const pointer to const
- Dynamic memory
    - Operators new, new [], delete, delete []
    - Memory leak, double deletion problem
- Passing arguments by value vs by pointer
- Pointer qualifiers
- Operations on pointers, pointer arythmetics

### References:
- The swap function implementation on pointers.
- The assignment dilemma (to create a new name or a copy?)
- References, definitions of them
- Differences between references and pointers
- Swap function on references
- Returning a reference to a local object from a function (why this is bad)
- Constant references
- Passing aruments inside the function by references

## Block 2: Introduction to OOP

### Classes:
- The concept of a class and structure.
- Class member.
- Fields and methods, the concept of encapsulation.
- Access modifiers.
- Operators . and ->

### Constructors and destructors:
- Constructors:
    - Default
    - Copy constructor
    - Overloading constructors
    - Shadowing, solution to the problem:
        - Renaming
        - Initialization list
        - With the this keyword
    - Initialization lists (solving the problem of initializing constants and references)
    - Rules for default generation of constructors by the compiler
    - The default and delete keywords (for methods)
    - The explicit keyword
    - Delegating constructors
- Destructors.

### Methods:
- Keyword this.
- Methods
- Const methods
- Mutable keyword
- Friend keyword
- Static fields and methods

### Operator overloading:
- Assignment operator, it's signature and common implementation. Rule of three.
- The idea of overloading operators
- Operator overloading using the BigInteger class as an example:
    - Arithmetic operators. The problem with the correctness of expressions like “x + y = 5;”. The problem is in the case of the left operand - not a class object (expressions like “5 + x”).
    - Compound assignments, correct expression of arithmetic operators.
    - Overloading of logical operators.
    - Overloading bitwise operators, including overloading operators << and >> using stream I / O as an example.
    - Comparison operator overloading.
- Overloading of the operator[]. Const and non-const versions.
- Overloading of cast operators. Another use for the explicit keyword.
- Overloading the operator(). Why is it n-ary? What's the signature?

## Block 3: Templates and exceptions
### Templates:
- What are templates (motivation):
    - Template classes and functions. (Examples)
- Template specializations:
    - The principle of particular: “particular is preferable to general”.
    - Partial and full specializations.
    - The principle is "better exact match, we have type casting".
    - Specialization vs template function overloading.
    - Compiler selection rules for specialization and overloading candidates 
- Template parameters that are not types (example: constant length array). Template parameters, which are “template template parameters”.

### Exceptions:
- General idea:
    - Motivation for using exceptions.
    - The throw statement and the try ... catch construct.
    - Examples of standard operators that throw exceptions.
- Difference between exceptions and runtime errors. Errors that are not exceptions and exceptions that are not errors.
- Rules for catching and re-throwing exceptions, casting types when catching exceptions. Catching all exceptions. The rules for choosing a catch block by the compiler in the case when different blocks are suitable.
- Copying when throwing and catching exceptions. Features of catching exceptions by value and by reference.
- Old-style exception specifications and their problems, unexpected exceptions. C ++ 11 style exception specifications, noexcept operator and specifier. Conditional noexcept.
- Exceptions in constructors and the problem of memory leaks on exceptions.
- Exceptions in destructors.
- Security guarantees for exceptions: basic and strict.

## Block 4: Inheritance
### Inheritance:
- Inheritance declaration:
    - Protected access modifier.
    - Difference between private, public and protected inheritance.
    - Difference between class inheritance and structs.
    - Final keyword
- Finding names when inheriting:
    - Hiding names of the base class methods.
    - Explicit call of the parent methods of the inheritor (Using ::).
    - The order in which constructors and destructors are called in inheritance. The problem with the initialization of the parents when defining the constructor of the inheritor, again using the initializer lists.
    - Multiple inheritance, ambiguity with it, diamond inheritance problem. Examples of disambiguation using type conversions and the operator::.


- Typecasting between parent and child:
    - Trimming when copying, casting pointers, casting references.
    - Dynamic_cast operator (unlike static_cast)
- Virtual functions, their general idea and difference from non-virtual ones:
    - Features of allocation of classes with virtual functions in memory
    - Virtual inheritance.
    - Concept of the virtual function table
    - Virtual destructor and its purpose
- The concept of dynamic polymorphism, polymorphic classes
- Placement in memory of classes
- Abstract classes:
    - Pure virtual functions, their features.
    - Pure virtual destructor (and why it causes the linker error).
    - Override keyword.
    - `Final` keyword (for methods)

## Block 5: Forgotten topics
+ `reinterpret_cast`, `const_cast`
+ `enum` types
+ `typedef` keyword
+ `using` keyword
    + template `using`
    + in-class `using`
    + in-scope `using`

