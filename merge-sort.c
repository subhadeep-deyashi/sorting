#include <stdio.h>

int arr[100001];
int tmp[100001];

void merge(int low, int mid, int high)
{
    int l1 = low, l2 = mid + 1, i = 0;
    for(; l1 <= mid && l2 <= high; ++i)
    {
        if(arr[l1] <= arr[l2])
            tmp[i] = arr[l1++];
        else
            tmp[i] = arr[l2++];
    }

    while(l1 <= mid)
        tmp[i++] = arr[l1++];
    while(l2 <= high)
        tmp[i++] = arr[l2++];

    for(int j = low, k = 0; j <= high; ++j, ++k)
        arr[j] = tmp[k];
}

void merge_sort(int low, int high)
{
    if(low < high)
    {
        int mid = low + high >> 1;
        merge_sort(low, mid);
        merge_sort(mid + 1, high);
        merge(low, mid, high);
    }
}

int main()
{
    int n;
    printf("Enter the number of terms : ");
    scanf("%i", &n);
    printf("Enter the elements : ");
    for(int i = 0; i < n; scanf("%i", &arr[i]), ++i);
    merge_sort(0, n-1);
    printf("Sorted array : ");
    for(int i = 0; i < n; printf("%i , ", arr[i]), ++i);
    printf("\n");
    return 0;
}