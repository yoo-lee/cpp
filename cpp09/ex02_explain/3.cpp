#include <iostream>
#include <ctime>

int main() {
    std::clock_t start = std::clock();

    // プログラムの実行

    std::clock_t end = std::clock();
    double elapsed = static_cast<double>(end - start) / CLOCKS_PER_SEC;

    std::cout << "Elapsed time: " << elapsed << " seconds" << std::endl;

    return 0;
}
