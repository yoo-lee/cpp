#include <iostream>
#include <list>

void merge(std::list<int>& A, int l, int mid, int r) {
    std::list<int> left(std::next(A.begin(), l), std::next(A.begin(), mid + 1));
    std::list<int> right(std::next(A.begin(), mid + 1), std::next(A.begin(), r + 1));
    
    auto it1 = left.begin();
    auto it2 = right.begin();
    auto it = std::next(A.begin(), l);
    
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
//     std::list<int> s = {5, 4, 3, 2, 1};

//     std::cout << "Before sorting: ";
//     for (int num : s) {
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;

//     mergeInsertList(s, 0, s.size() - 1);

//     std::cout << "After sorting: ";
//     for (int num : s) {
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }
