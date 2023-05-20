
merge(int arr[], int left, int right)
{
	int n1 = mid - left +1;
	int n2 = right - mid;

	std::vecctor<int> leftarr(n1);
	std::vecctor<int> rightarr(n2);

	for (int i = 0; i < n1; ++i)
	{
		leftarr[i] = arr[left + i];
	}

	for (int i = 0; i < n2; ++i)
		rightarr[i] = arr[mid + 1 +i];

	int i = 0;
	int j = 0;
	int k = left;

	while(i < n1 && j < n2)
	if(leftarr[i] <= rightarr[j]){
		arr[k] = leftarr[i];
		i++;
	}
	else{
	arr[k] = rightarr[j];
	++j;
	}
	++k;
}

while(i < n1)
{
	arr[k] = leftarr[i];
	++i;
	++k;
}

 while (j < n2) 
{
        arr[k] = rightarr[j];
        ++j;
        ++k;
}

void	mergesort(std::vector<int>& arr, int left, int right)
{
	if(left < right)
	{
		int mid = left + (right - left) / 2;
	}

	mergesort(arr, left, mid);
	mergesort(arr, left+1, mid);
	mergesort(arr, right, mid);
}