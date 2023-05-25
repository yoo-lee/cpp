#include "PmergeMe.hpp"
#include <algorithm>

std::vector<int> PmergeMe::sort_vector(const std::vector<int> &data) 
{
  std::vector<int> result(data);
  std::sort(result.begin(), result.end());
  return result;
}

std::list<int> PmergeMe::sort_list(const std::vector<int> &data) {
  std::list<int> result(data.begin(), data.end());
  result.sort();
  return result;
}
