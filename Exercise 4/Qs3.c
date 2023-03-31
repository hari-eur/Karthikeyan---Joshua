#include <stdio.h>
#define size 8
int main()
{
    int arr[size];
    int *ptr = arr;
    printf("Enter the array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Printing elements using pointer:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
    return 0;
}
