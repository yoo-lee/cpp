#include <iostream>
#include <vector>
#include <chrono>
#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
  try {
    if (argc < 2) {
      std::cerr << "Error: No input sequence provided\n";
      return 1;
    }

    std::vector<int> input;
    for (int i = 1; i < argc; ++i) {
      input.push_back(std::stoi(argv[i]));
    }

    auto start = std::chrono::high_resolution_clock::now();
    PmergeMe pmergeMe;
    std::vector<int> sorted = pmergeMe.sort(input);
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Before: ";
    for (const auto &i : input) {
      std::cout << i << " ";
    }
    std::cout << "\n";

    std::cout << "After: ";
    for (const auto &i : sorted) {
      std::cout << i << " ";
    }
    std::cout << "\n";

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    std::cout << "Time to process a range of " << input.size() << " elements with std::vector: " << duration << " us\n";

  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << "\n";
    return 1;
  }
  
  return 0;
}
