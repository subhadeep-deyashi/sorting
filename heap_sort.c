#include <stdio.h>
int arr[100001];

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void heapify(int i, int size)
{
    int largest = i;
    int left = (i << 1) + 1;    // left child = (2 * i) + 1
    int right = (i << 1) + 2;   // right child = (2 * i) + 2

    // max heap tree implementation
    if (left < size && arr[left] > arr[largest])
        largest = left;
    if (right < size && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(&arr[largest], &arr[i]);

        // heapify the rest of the subtree
        heapify(largest, size);
    }
}

void heap_sort(int size)
{
    // (size / 2) - 1 ensures that you start from the last parent
    for (int i = (size >> 1) - 1; i >= 0; --i)
        heapify(i, size);

    for (int i = size - 1; i >= 0; --i)
    {
        swap(&arr[0], &arr[i]);

        // then heapify again with reduced size i.e., eliminating the largest element from the last
        heapify(0, i);
    }
}

int main()
{
    int size;
    printf("Enter the number of elements : ");
    scanf("%i", &size);
    printf("Enter the elements : ");
    for (int i = 0; i < size; scanf("%i", &arr[i]), ++i)
        ;

    heap_sort(size);

    printf("Sorted array : ");
    for (int i = 0; i < size; printf("%i, ", arr[i]), ++i)
        ;
    printf("\n");
    return 0;
}