#include <iostream>
#include <vector>

void merge(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> leftArr(n1);
    std::vector<int> rightArr(n2);

    for (int i = 0; i < n1; ++i){
		using namespace std;
        leftArr[i] = arr[left + i];
		// cout << "i ="<<i << " " << "leftArr[i]  ="<<leftArr[i] <<  endl;
	}
    for (int j = 0; j < n2; ++j)
        rightArr[j] = arr[mid + 1 + j];

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) 
	{
			// cout << "j1 ="<< j << " " << "rightArr[j] ="<< rightArr[j] <<  endl;
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            ++i;
        } else {
            arr[k] = rightArr[j];
            ++j;
        }
        ++k;
		// cout << "k ="<< k << " " << "arr[k] =" << arr[k] <<  endl;
		// cout << "i ="<<i << " " << "leftArr[i]  ="<<leftArr[i] <<  endl;
		// cout << "j2 ="<< j << " " << "rightArr[j] ="<<rightArr[j] <<  endl;
		
	}

    while (i < n1) {
        arr[k] = leftArr[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        ++j;
        ++k;
    }
}

void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
		using namespace std;
		cout << "left ="<< left << " " << "mid  ="<< mid <<  endl;
		for(int i = 0; i < 6; i++)
		cout  << " " << "arr  ="<< arr[i] <<  endl;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    // std::vector<int> v = {5, 4, 3, 2, 1};

    std::cout << "Before sorting: ";
    for (int num : v) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    mergeSort(v, 0, v.size() - 1);

    std::cout << "After sorting: ";
    for (int num : v) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
