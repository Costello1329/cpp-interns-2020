# H/w #3: permutation

### Condition:
Implement the class Permutation that will be working with math permutations. By definition, permutation is an array of `n` numbers from `0` to `n-1` (each number is included only once). Implement the next methods:
+ Constructor from `unsigned int n` that creates the default permutation with `n` numbers.
+ Constructor from the `unsigned int n` and `unsigned* values`. Here you don't need to validate the array, so you can suppose that it represents a valid permutation of the length `n`.
+ Operators ++, -- (prefix and postfix ones) which respectively increase and decrease the permutation in lexicographical order.
+ Functions `next(...)` and `previous(...)` that return next or previous permutation of the given permutation (the initial one won't be changed).
+ Operators >, <, ==, !=, <=, >= that compare permutations in lexicographical order.
+ Operator [] for getting the i-th element of the permutation (must not provide an access for modification of the elements).
+ Method inverse(), that invertes the current permutation.
+ Operator * and *= for multiplication of the permutations.
+ void Operator () that takes an array of exactly n elements and applies the permutation to it.


##### Pay attention to the rule of three. Also you can not use any std:: objects/functions except cout, cin, endl.

### Deadline:
+ Undefined.
