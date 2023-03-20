#include <stdio.h>

int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int arr[n][n];
    printf("Enter matrix elements:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]==m)
            {
                arr[i][j]=arr[i-1][j];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
