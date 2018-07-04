#include <stdio.h>

void insertion_sort(int arr[], int n)
{
    int tmp, i, j;
    for(i = 1; i < n; ++i)
    {
        tmp = arr[i];
        for(j = i - 1; j >= 0 && tmp < arr[j]; --j)
            arr[j+1] = arr[j];

        arr[j+1] = tmp;
    }
}

int main(void)
{
    int n, i, arr[30];
    printf("enter the number of elements : ");
    scanf("%i" , &n);
    printf("enter the elements : ");
    for(i = 0; i < n; scanf("%i", &arr[i]), ++i);
    insertion_sort(arr, n);
    printf("the sorted array : ");
    for(i = 0; i < n; printf("%d , ", arr[i]), ++i);
}