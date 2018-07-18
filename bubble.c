#include <stdio.h>
int arr[10001];

void bubble_sort(int n)
{
   int i, j, c = 1;
   for (i = 1; i < n && c; i++)        
   {
       c = 0;
       for (j = 0; j < n-i; j++) 
       {
           if (arr[j] > arr[j+1])
            {
                int tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
                c = 1;
            }
        }
    }
}

int main()
{
    int size;
    printf("enter the number of elemnets : ");
    scanf("%i", &size);
    printf("enter the elements : ");
    for(int i = 0; i < size; scanf("%i", &arr[i]), ++i);
    bubble_sort(size);
    printf("The sorted array is : ");
    for(int i = 0; i < size; printf("%i , ", a[i]), ++i);
    return 0;
}
