# H/w #3: permutation

### Condition:
Implement a `template <size_t N>` class `permutaion` class which manages [mathematical 
permutations](https://en.wikipedia.org/wiki/Permutation). Permutation can be stored as an `unsigned` array of 
size `N`, filled with values from `0` to `N - 1`

Your class has to support these operations:
- Constructors:
  - `permutation()` which creates an identity permutation of 
    given length
  - `permutation(unsigned *array)` which creates a permutation
    from an array of values by copying them. You don't need to validate an array and check it's correctness.
- Copy-constructor and assignment operator
- Multiplication of permutations that returns composition of two permutations 
- Prefix and postfix increment and decrement, that return lexicographically 
  next and previous permutations for the current one
- Comparison operators: `==`, `!=`, `<`, `>`, `<=`, `>=`, which compare 
  permutations in lexicographical order
- `operator[]` for accessing permutation element at the given position, but 
  changing it's value should be disallowed
- `inverse()` method, returning inverse permutation for the current one
- `void operator(unsigned* values)`, which applies permutation to 
  a given array

Don't forget to mark methods as const, where applicable.


##### Pay attention to the rule of three. Also you can not use any std:: objects/functions except std::swap.

### Deadline:
+ Undefined.
