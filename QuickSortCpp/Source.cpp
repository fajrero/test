#include <iostream>
#include <conio.h>
using namespace std;

void quickSort(int *arr, int left, int right)
{
	int i = left, j = right;
	int pivot = arr[(left + right) / 2];
	int temp;
	while (i <= j)
	{
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}
	if (left < j) quickSort(arr, left, j);
	if (i < right) quickSort(arr, i, right);
}

int main()
{
	int n = 0;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	quickSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
		if (arr[i] % 2 == 0) cout << arr[i] << " ";
	for (int i = n - 1; i >= 0; i--)
		if (arr[i] % 2 != 0) cout << arr[i] << " ";
	delete[] arr;
	_getch();
	return 0;
}