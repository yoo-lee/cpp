
void merge(vector<int> &arr , int left, int mid, int right)
{
	int n1 = mid - left +1;
	int n2 = right - mid;

	std::vector<int> leftArr(n1);
	std::vector<int> rightArr(n2);
}

for (int i = 0; i < n1; i++;)
	leftArr[i] = &arr

int main() {
    std::vector<int> arr = {1, 2, 3};
	std::vector<int> arr2 = {3, 4 ,5};

    mergeSort(arr);

    // ソートされた結果を出力
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}