#include <iostream>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
  try {
    if (argc < 2) {
      std::cerr << "Error: No input sequence provided\n";
      return 1;
    }

    std::vector<int> input;
    for (int i = 1; i < argc; ++i) {
      input.push_back(std::atoi(argv[i]));
    }

    PmergeMe pmergeMe;

    clock_t start1 = clock();
    std::vector<int> sorted_vector = pmergeMe.sort_vector(input);
    clock_t end1 = clock();

    clock_t start2 = clock();
    std::list<int> sorted_list = pmergeMe.sort_list(input);
    clock_t end2 = clock();

    std::cout << "Before: ";
    for (size_t i = 0; i < input.size(); ++i) {
      std::cout << input[i] << " ";
    }
    std::cout << "\n";

    std::cout << "After(vector): ";
    for (std::vector<int>::const_iterator it = sorted_vector.begin(); it != sorted_vector.end(); ++it) {
      std::cout << *it << " ";
    }
    std::cout << "\n";

    std::cout << "After(list): ";
    for (std::list<int>::const_iterator it = sorted_list.begin(); it != sorted_list.end(); ++it) {
      std::cout << *it << " ";
    }
    std::cout << "\n";

    double duration1 = (static_cast<double>(end1 - start1) / CLOCKS_PER_SEC) * 1000000.0;
    std::cout << "Time to process a range of " << input.size() << " elements with std::vector: " << std::fixed << std::setprecision(6) << duration1 << " us\n";

    double duration2 = (static_cast<double>(end2 - start2) / CLOCKS_PER_SEC) * 1000000.0;
    std::cout << "Time to process a range of " << input.size() << " elements with std::list: " << std::fixed << std::setprecision(6) << duration2 << " us\n";

  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << "\n";
    return 1;
  }

  return 0;
}
