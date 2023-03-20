#include<stdio.h>
#include<ctype.h>

void sort(char []);
char d_sort(char [],int);
char A_sort(char [],int,int);


int main()
{
    
    char str[100];
    int i;
    scanf("%[^\n]s",str);
    sort(str);
    return 0;
}

void sort(char str[])
{
    int i,a=0;
    while(str[i]!='\0')
    if(isdigit(str[i++]))
    {}
    else 
    a=i;
    if(isalpha(str[a++])){}
    d_sort(str,i);
    A_sort(str,a,i);
    
}
char d_sort( char* str,int i)
 {
      int k,j,Temp;
     for(k=0; k<i; k++)
    {
        for(j=k+1; j<i; j++)
        {
            if(str[j]<str[k])
            {
                Temp = str[k];
                str[k] = str[j];
                str[j] = Temp;
            }
        }
    }
 }
 
 char A_sort( char* str1,int a,int i)
 {
      int k,j,Temp;
     for(k=i; k<a; k++)
    {
        for(j=k+1; j<a; j++)
        {
            if(str1[j]<str1[k])
            {
                Temp = str1[k];
                str1[k] = str1[j];
                str1[j] = Temp;
            }
        }
    }
    printf("%s ",str1);
 }
 