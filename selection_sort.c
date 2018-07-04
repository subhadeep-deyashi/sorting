#include<stdio.h>

void selection_sort(int arr[], int n)
{
    int k, i, j, tmp;
    for(i = 0; i < n - 1; ++i)
    {
        k = i;
        for(j = i+1; j < n; ++j)
        {
            if(arr[j] < arr[k])
                k = j;
        }
        if(k != i)
        {
            tmp = arr[i];
            arr[i] = arr[k];
            arr[k] = tmp;
        }
    }
}

int main()
{
    int arr[30], k, i, n;
    printf("enter the number of elements : ");
    scanf("%i", &n);
    printf("enter the elements : ");
    for(i = 0; i < n; scanf("%i", &arr[i]), ++i);
    selection_sort(arr, n);
    printf("the sorted array : ");
    for(i = 0; i < n; ++i)
         printf("%i , ", arr[i]);
    return 0;
}