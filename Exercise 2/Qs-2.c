#include <stdio.h>

int main() {
   int i,j,rows,k=0,m=0,n=0,s;
   printf("Enter the number of rows:\n ");
   scanf("%d", &rows);
   
   printf("Full Pyramid:\n");
   for (i=1;i<=rows;i++) 
   {
      for (s=1;s<=rows - i;s++) 
      {
         printf("  ");
         m++;
      }
      while (k!=2*i-1) 
      {
         if (m<= rows - 1) 
         {
            printf("%d ",i+k);
            m++;
         } else 
         {
            n++;
            printf("%d ", (i + k-2*n));
         }
         ++k;
      }
      n=m=k=0;
      printf("\n");
   }
   printf("Inverted Pyramid:\n");
  for(i=rows; i>=1; i--)
  {
      for(j=1; j<=s; j++)
        printf("  ");
        
      for(j=1; j<=i; j++)
         printf("%d ",j);

      for(j=i-1; j>=1; j--)
        printf("%d ",j);
     printf("\n");
     s++;
    }
    printf("Half Pyramid:\n");
   for (i=1; i<=rows;i++)
   {
      for (j = 1; j <= i;j++) 
      {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}
