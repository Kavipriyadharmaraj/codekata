#include <iostream>
 
using namespace std;
void Merge(int *x, int low, int high, int mid)
{
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
	while (i <= mid && j <= high)
	{
		if (x[i] < x[j])
		{
			temp[k] = x[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = x[j];
			k++;
			j++;
		}
	}

	while (i <= mid)
	{
		temp[k] = x[i];
		k++;
		i++;
	}

	while (j <= high)
	{
		temp[k] = x[j];
		k++;
		j++;
	}

	for (i = low; i <= high; i++)
	{
		x[i] = temp[i-low];
	}
}

void MergeSort(int *x, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		MergeSort(x, low, mid);
		MergeSort(x, mid+1, high);
		Merge(x, low, high, mid);
	}
}
 
int main()
{
	int n, i;
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
 
	MergeSort(arr, 0, n-1);

	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        cout<<" "<<arr[i];
 
	return 0;
}
