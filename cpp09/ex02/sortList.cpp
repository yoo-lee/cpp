#include <iostream>
#include <list>

void merge(std::list<int>& A, int l, int mid, int r) {
    std::list<int> left(std::next(A.begin(), l), std::next(A.begin(), mid + 1));
    std::list<int> right(std::next(A.begin(), mid + 1), std::next(A.begin(), r + 1));
    
    std::list<int>::iterator it1 = left.begin();
    std::list<int>::iterator it2 = right.begin();
    std::list<int>::iterator it = std::next(A.begin(), l);
    
    while (it1 != left.end() && it2 != right.end()) {
        if (*it1 <= *it2) {
            *it = *it1;
            ++it1;
        } else {
            *it = *it2;
            ++it2;
        }
        ++it;
    }
    
    while (it1 != left.end()) {
        *it = *it1;
        ++it;
        ++it1;
    }
    
    while (it2 != right.end()) {
        *it = *it2;
        ++it;
        ++it2;
    }
}

void mergeInsertList(std::list<int>& A, int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;
        mergeInsertList(A, l, mid);
        mergeInsertList(A, mid + 1, r);
        merge(A, l, mid, r);
    }
}

// int main() {
//     std::list<int> A = {3, 5, 9, 7, 4};
    
//     std::cout << "Before: ";
//     for (const auto& num : A) {
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;
    
//     mergeInsertList(A, 0, A.size() - 1);
    
//     std::cout << "After: ";
//     for (const auto& num : A) {
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;
    
//     return 0;
// }