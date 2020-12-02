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

##### You can not use any std:: objects/functions except std::swap.

#### Partial points for the solution:
The task is divided into 4 blocks:

1. Constructors, rule of three, operator[]: 2pts
2. Comparison operators: 2pts
3. Operator(), multiplication: 3pts
4. Inverse: 1pts
5. Next, prev, linear arythmetical operators: 4pts

In order to get partial points for passing `n` blocks, you need to pass all the tests related to block `n` and every previous block. Your solution is rated automatically.


##### How to pass the h/w check:
+ 1) You are given with the template. You must write the code strictrly inside this file. You are not allowed to change the class name nor change the file name.
+ 2) You need to submit the solution to Yandex Contest before the deadline in order to pass the h/w check.
+ 3) After your solution passes the tests, we'll review the code. Maybe we'll ask to make some fixes. You'll have some time for that as always.
+ 4) **Important**: Writing off is prohibited. We'll have an access to all of the solutions. We'll check uniqueness of every (!) solution. It'll be done automatically with our own software. Every written-off solution will be banned and every pair of similar solutions will receive 0 points.

### Deadline:
+ 20-th Dec 2020, 23:59:59.
