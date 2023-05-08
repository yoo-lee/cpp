#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

#include <vector>
#include <list>
#include <algorithm>

class PmergeMe {
public:
  std::vector<int> sort(const std::vector<int> &data) {
    std::vector<int> result(data);
    std::sort(result.begin(), result.end());
    return result;
  }
};

#endif // PMERGE_ME_HPP
