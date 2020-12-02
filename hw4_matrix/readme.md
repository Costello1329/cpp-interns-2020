# H/w #4: matrix

### Condition:
Implement template `matrix` class with three template parameters:
`typename T, size_t Height, size_t Width`, where `T` is the type of the elements
of the matrix

You class has to support these operations:
- Operators `==` and `!=` that check for equality
- Default constructor that fills matrix with zeroes
- `Matrix (const T& num)` that initializes elements of 
  the matrix with `num`'s value
- Binary operators `+`, `-`, `+=`, `-=` that perform addition and subtraction of 
  matrices of the same size
- Operators `*` and `*=` that multiply matrix by a scalar
- Operators `*` and `*=` that multiply two matrices together
- Unary operators `+` and `-`
- `at(const size_t& i, const size_t& j)` method that returns a reference 
  to a given element. If the matrix is const, the reference should be read-only
- `transposed()` method that returns transposed copy of the matrix
- `T trace()` method that calculates [trace](https://en.wikipedia.org/wiki/Trace_(linear_algebra)) 
  of the matrix
- `T det()` method that calculates [determinant](https://en.wikipedia.org/wiki/Determinant) 
  of the matrix
  - If you want to declare a matrix minor inside this method, 
    you'll need to use `matrix_minor` to prevent infinite template recursion

Don't forget to mark methods as const, where applicable.

You are not allowed to include anything.


##### Pay attention to the rule of three. Also you can not use any std:: objects/functions except std::swap.

#### Partial points for the solution:
The task is divided into 4 blocks:

1. Constructors, rule of three, methods at: 2pts
2. Comparison: 1pts
3. Linear arithmetic operators: 3pts
4. Multiplication: 2pts
5. Transpose: 1pts
6. Det, trace: 5pts

In order to get partial points for passing `n` blocks, you need to pass all the tests related to block `n` and every previous block. Your solution is rated automatically.


##### How to pass the h/w check:
+ 1) You are given with the template. You must write the code strictrly inside this file. You are not allowed to change the class name nor change the file name.
+ 2) You need to submit the solution to Yandex Contest before the deadline in order to pass the h/w check.
+ 3) After your solution passes the tests, we'll review the code. Maybe we'll ask to make some fixes. You'll have some time for that as always.
+ 4) **Important**: Writing off is prohibited. We'll have an access to all of the solutions. We'll check uniqueness of every (!) solution. It'll be done automatically with our own software. Every written-off solution will be banned and every pair of similar solutions will receive 0 points.

### Deadline:
+ 3-th Jan 2020, 23:59:59.

