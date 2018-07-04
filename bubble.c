#include <stdio.h>

void bubble(int arr[], int n)
{
   int i, j, c = 1;
   for (i = 1; i < n && c; i++)        
   {
       c = 0;
       for (j = 0; j < n-i; j++) 
           if (arr[j] > arr[j+1])
            {
                int tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
                c = 1;
            }
    }
}

int main()
{
    int n;
    printf("enter the number of elemnets : ");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements : ");
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    bubble(a, n);
    for(int i = 0; i < n; ++i)
    {
        printf("%d , ", a[i]);
    }
    return 0;
}