#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr;
    int n, i,sum = 0;;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));
    if (ptr != NULL)
    {
        printf("Enter the array elements:\n");
        for (i = 0; i < n; i++) {
            scanf("%d",&ptr[i]);
        }
        printf("Sum of elements in the array: \n");
        for (i = 0; i < n; i++) {
            sum += ptr[i];
        }
        printf("%d\n", sum);
    }
    else
    {
        printf("Memory not allocated.\n");
    }

    free(ptr);
    return 0;
}
