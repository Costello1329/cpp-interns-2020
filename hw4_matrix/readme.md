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

You are not allowed to include anything other than 
`<iostream>`, `<vector>` and `<string>`


##### Pay attention to the rule of three. Also you can not use any std:: objects/functions except std::swap.

### Deadline:
+ Undefined.
