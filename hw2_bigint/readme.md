# H/w #2: bigint

### Condition:
In this task you'll have to implement a `bigint` class for managing signed integers of arbitrary length.

##### You class has to support these operations:
+ Addition, subtraction and multiplication which behave in the same way as with usual int, also compound assignment for these operations. In other words, you'll need to have these operators: +, -, *, +=, -=, *=
+ Unary - and +, prefix and postfix increment and decrement
+ Comparison operators: ==, !=, <, >, <=, >=
+ Input from and output to streams (You'll need to overload operators >> and << for that)
+ to_string() method, that returns `std::string` representation of the number
+ Constructor from int, that supports implicit conversion
+ Explicit cast to bool that should work, for example, in if clauses
+ **Important**: Don't forget to mark methods as const, where applicable.
+ **Important**: You are not allowed to include anything other than `<iostream>`, `<vector>` and `<string>`
+ It is prohibited to use `using` keyword.
+ *Advice*: we suggest you to rewatch the lectures and seminars on classes (straigth from the begging of the topic!).

##### How to pass the h/w check:
+ 1) You are given with the template. You must write the code strictrly inside this file. You are not allowed to change the class name nor change the file name.
+ 2) In a few days we'll post a link to Yandex Contest and you'll be able to submit the solution and check it on our tests.
+ 3) After your solution passes the tests, we'll review the code. Maybe we'll ask to make some fixes. You'll have some time for that as always.
+ 4) **Important**: Writing off is prohibited. We'll have an access to all of the solutions. We'll check uniqueness of every (!) solution. It'll be done automatically with our own software.

### Deadline:
+ 13-th Dec 2020, 23:59:59.

