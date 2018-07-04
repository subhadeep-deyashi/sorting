#include <stdio.h>

int arr[100001];

void quicksort(int low, int high)
{
	int pivot, i, j;
	if(low < high)
	{
		pivot = low;
		i = low;
		j = high;

		while(i < j)
		{
			if(arr[i] <= arr[pivot] && i < high)
				++i;
			if(arr[j] > arr[pivot])
				--j;
			if(i < j)
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
		
		int t = arr[j];
		arr[j] = arr[pivot];
		arr[pivot] = t;

		quicksort(low, j);
		quicksort(j + 1, high);
	}
}

int main()
{
	int n, i;
	printf("\n\nENTER THE NUMBER OF ELEMENTS : ");
	scanf("%i", &n);

	printf("Enter the elements : ");
	for(i = 0; i < n; scanf("%i", &arr[i]), ++i);

	quicksort(0, n-1);
	
	printf("THE SORTED LIST : ");
    for(i = 0; i < n; printf("%i, ", arr[i]), ++i);
    printf("\n");
	
	return 0;
}
