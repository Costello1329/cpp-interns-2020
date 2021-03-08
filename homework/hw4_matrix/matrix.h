#ifndef MATRIX_SRC_MATRIX_H
#define MATRIX_SRC_MATRIX_H

#include <algorithm>
#include <iostream>



template <typename T, size_t H, size_t W>
class matrix {
private:
    /// You should use this only inside det() method once.
    using matrix_minor = matrix<T, std::max<size_t>(H - 1, 1), std::max<size_t>(W - 1, 1)>;
}


#endif /// MATRIX_SRC_MATRIX_H.
