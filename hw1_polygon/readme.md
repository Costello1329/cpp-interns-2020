# H/w #1: polygon

### Condition:
Implement two functions for counting the area and the perimeter of the polygon. The polygon is given as the triad:
+ const size_t n – the amount of dots
+ const double * const X – the X coordinates of the dots.
+ const double * const Y – the Y coordinates of the dots.

In order to count the perimeter, you need to count the length of every edge and sum all the values. You can use #include <cmath> and `sqrt()` function in order to count the square root.
To count the area, you need to iterate on all of the segments (suppose that seg_start is the start point of the segment, and seg_end is the end point of the segment, and 0 is the point (0,0)): on every iteration you need to count cross product of two vectors: `0 -> seg_start` and `0 -> seg_end`. You need to sum all this cross products that you've got at the each iteration. After that, you need to divide the result by 2 and get the absolute value of the result and return it.


##### How to pass the h/w check:
+ 1) You are allowed to write the code only where it is stated: `/// Your code goes here`.
+ 2) You need to send ONE .cpp file to your seminar teacher.
+ 3) The code must be tested properely BEFORE attending.
+ 4) Teacher can decrease points for the task if you've attended it too many times
+ 5) Non-working solutions won't get ANY points at all.

### Deadline:
+ 3-rd Nov 2020, 23:59:59.

