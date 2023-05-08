#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    vector<int> L(n1), R(n2);

    /* Copy data to temp arrays L[] and R[] */
 for (i = 0; i < n1; i++) {
    L[i] = arr[l + i];
    // cout << "L[" << i << "]=" << L[i] << " ";
}
cout << endl;

for (j = 0; j < n2; j++) {
    R[j] = arr[m + 1 + j];
    // cout << "R[" << j << "]=" << R[j] << " ";
}
cout << endl;


    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
    	cout << "arr[" << k << "]=" << arr[k] << " ";
        cout << "L[" << i << "]=" << L[i] << " ";
        cout << "R[" << j << "]=" << R[j] << " ";
            i++;
		}
        else {
            arr[k] = R[j];
			cout << "arr[" << k << "]=" << arr[k] << " ";
        	cout << "L[" << i << "]=" << L[i] << " ";
        	cout << "R[" << j << "]=" << R[j] << " ";
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    if (l >= r) {
        return;//returns recursively
    }
    int m = (l + r - 1) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}

int main() {
    vector<int> arr = { 12, 11, 13, 5, 6, 7 };
    mergeSort(arr, 0, arr.size() - 1);

    for (auto& x : arr) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
