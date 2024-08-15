#include "samples.h"
#include <iostream>

// Returns square area (for length size n).  For negative n, square area is defined to be 0.
float get_square_area(const float n) {
    float result = 0;
    if (n >= 0) {
        result = n * n;
    }
    return result;
}

int main() {
    std::cout << "Hello World!";
    return 0;
}
