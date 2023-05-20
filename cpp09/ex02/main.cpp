#include <iostream>
#include <vector>
#include <iomanip>
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

    PmergeMe pmergeMe;
    auto start1 = std::chrono::high_resolution_clock::now();
    std::vector<int> sorted_vector = pmergeMe.sort_vector(input);
    auto end1 = std::chrono::high_resolution_clock::now();
    auto start2 = std::chrono::high_resolution_clock::now();
    std::list<int> sorted_list = pmergeMe.sort_list(input);
    auto end2 = std::chrono::high_resolution_clock::now();

    std::cout << "Before: ";
    for (const auto &i : input) {
      std::cout << i << " ";
    }
    std::cout << "\n";

    std::cout << "After(vector): ";
    for (const auto &i : sorted_vector) {
      std::cout << i << " ";
    }
    std::cout << "\n";

    std::cout << "After(list): ";
    for (const auto &i : sorted_list) {
      std::cout << i << " ";
    }
    std::cout << "\n";

    auto duration1 = std::chrono::duration_cast<std::chrono::microseconds>(end1 - start1).count();
    std::cout << "Time to process a range of " << input.size() << " elements with std::vector: " <<  std::fixed << std::setprecision(6) << duration1 << " us\n";

    auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>(end2 - start2).count();
    std::cout << "Time to process a range of " << input.size() << " elements with std::list: " << std::fixed << std::setprecision(6) << duration2 << " us\n";

  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << "\n";
    return 1;
  }

  return 0;
}
