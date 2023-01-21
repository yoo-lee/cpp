#include <limits>
#include <iostream>
#include <iomanip>

int main() {
    // std::cout << std::numeric_limits<int>::max() << std::endl
            //   << std::numeric_limits<int>::min() << std::endl
           std::cout << std::fixed << std::setprecision(2) << 2.000 << std::endl;
            //   << std::setprecision(150) << std::numeric_limits<float>::min() << std::endl
            //   << std::setprecision(1) << std::numeric_limits<double>::max() << std::endl
            //   << std::setprecision(1050) << std::numeric_limits<double>::min() << std::endl;
}