#include <iostream>
#include <vector>

void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
		using namespace std;
		cout << "left ="<< left << " " << "mid  ="<< mid <<  endl;
		for(int i = 0; i < 6; i++)
		cout  << " " << "arr  ="<< arr[i] <<  endl;
        mergeSort(arr, left, mid);
        // mergeSort(arr, mid + 1, right);

    }
}

	
int main() {
    std::vector<int> v = {5, 4, 3, 2, 1};

    mergeSort(v, 0, v.size() - 1);
}