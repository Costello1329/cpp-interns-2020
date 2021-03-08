#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;


double cross_product (double x1, double y1, double x2, double y2) {
    return /** YOUR CODE GOES HERE **/;
}

double count_area (const size_t n, const double * const x, const double * const y) { /** YOUR CODE GOES HERE **/ }

double count_perimeter (const size_t n, const double * const x, const double * const y) { /** YOUR CODE GOES HERE **/ }


int main () {
    size_t n;
    cin >> n;

    double *x, *y;
    x = new double[n];
    y = new double[n];

    for (size_t i = 0; i < n; i ++)
        cin >> x[i] >> y[i];

    cout << "Area: " << count_area(n, x, y) << endl;
    cout << "Perimeter: " << count_perimeter(n, x, y) << endl;

    delete[] x;
    delete[] y;

    return 0;
}

