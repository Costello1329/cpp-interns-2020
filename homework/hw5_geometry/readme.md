# H/w #5: geometry


### Condition:
Your task is to implement a hierarchy of classes for geometric shapes on a plane.

First of all, we need to define a convenient way of storing points:

- Struct `vector` - a vector on a plane with these requirments:
  - Fields (data members) `x` and `y` must be public. 
  - Constructor from two `double` arguments.
  - Default constructor
  - Vectors must be comparable using operators `==` and `!=`
  - Addition and subtraction of vectors must be supported,
    as well as multiplication and division of a vector by a `double` scalar;
    unary plus and minus too.
  - Method `length()` that returns the magnitude of a vector

- Also some out-of-class functions which operate on vectors:
  - `double dot_product (const vector& lhs, const vector& rhs)`
  - `double cross_product (const vector& lhs, const vector& rhs)`
  - `bool collinear (const vector& lhs, const vector& rhs)` - checks if two 
    vectors are collinear


From now on, for simplicity sake, vectors will be used to store points. 
Please, do **NOT** confuse these vectors with std::vectors, they are two entirely
different things which are similar ***only*** in name.

The hierarchy of shape must be implemented as follows:

- Abstract base class `shape`

- Class `polygon`. Subclass of `shape`. Constructible from `std::vector<vector>`
containing points in the order of traversal. It is guaranteed, that points won't
define a self-intersecting polygon. A polygon should be able to tell its `vertices_count()` -
number of vertices, and `std::vector<vector> get_vertices()` - immutable std::vector of vertices
in counter-clockwise order.

- Class `circle`. Subclass of `shape`. Constructible from a `vector` and a number 
(center and radius). Should be able to tell its `double radius()`

- Class `rectangle`. Subclass of `polygon`. Constructible from a `vector` and 
two `double`s (center, height and width). Should contain method `vector center()`
that returns the center of a rectangle. Also should be able to tell it's `height()`
and `width()`

- Class `square`. Subclass of `rectangle`. Constructible from a `vector` and 
and a `double` (center and side length). Square should be able to return its
`circle circumscribed_circle()` and `circle inscribed_circle()`; and also it's 
`side()` length.

- Class `triangle`. Subclass of `polygon`.
Constructible from three `vector`s. Should be able to return its
`circle circumscribed_circle()` and `circle inscribed_circle()`.



Every shape should support these const methods:

- `vector center ()` - return the [geometrical center](https://en.wikipedia.org/wiki/Centroid)
of the shape

- `double perimeter()` - perimeter

- `double area()` - area

- `operator==(const shape& another)` - checks if given shapes are equal 
(define the same set of points). Also don't forget about `operator!=`

- `bool congruent_to(const shape& another)` - checks if this shape is [congruent](https://en.wikipedia.org/wiki/Congruence_relation) to a given one


And also these non-const methods:

- `rotate(double angle)` - rotates a shape by a given angle 
(in radians, counter-clockwise) around its [geometrical center](https://en.wikipedia.org/wiki/Centroid)

- `scale(double coefficient)` - performs a [homothetic transformation](https://en.wikipedia.org/wiki/Homothetic_transformation)
of a shape with respect to its [geometrical center](https://en.wikipedia.org/wiki/Centroid).

- `translate(vector transform)` - performs translation of every point of a shape 
by a given vector.


Don't forget to mark these common methods of `shape` as virtual, if you intend 
to override them in child classes.


#### Important note about comparison:
Floating point arithmetic is inaccurate, e.g. if you multiply a float by 3 and then divide it by 3, the result may differ a little bit from the initial value. Thus, when comparing two floating point numbers you should define a maximum allowed error for equality. You can define a function for that: 

```c++
const double EPS = 1e-6;

bool equal(double a, double b) {
    return std::fabs(a - b) < EPS;
}
```

In this task you should use `10^(-6)` as an absolute error.


#### Partial points for the solution:
The task is divided into 8 blocks:

1. Vector: 2pts
2. Shape: 1pts
3. Circle: 1pts
4. Polygon: 5pts
5. Rectangle: 1pts
6. Square: 1pts
7. Triangle: 2pts
8. Various tests (see details in the test log): 3pts


##### Note about submission
In this task you are allowed to send a multiple file project in an archive.
To do so, you should have one `geometry.h` file that includes all the other needed ones.
Then, you should pack your project into a `.zip` archive, so that `geometry.h`
is located at the root of the archive.
Your archive shouldn't contain `.cpp` files, these won't get compiled


##### How to pass the h/w check:
+ 1) In this task you are not given with the template. You have to write your own `.h` file or file hierarchy with the solution. Please name your classes and function exactly as given in the task statement.
+ 2) You need to submit the solution to Yandex Contest before the deadline in order to pass the h/w check.
+ 3) After your solution passes the tests, we'll review the code. Maybe we'll ask to make some fixes. You'll have some time for that as always.
+ 4) **Important**: Plagiarism is prohibited. We'll have an access to all of the solutions. We'll check uniqueness of every (!) solution. It'll be done automatically with our own software. Every plagiarised solution will be banned and every pair of similar solutions will receive 0 points.


### Deadline:
+ 28-th Jan 2020, 23:59:59.
