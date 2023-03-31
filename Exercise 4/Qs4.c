#include <stdio.h>
#include <string.h>
#include <ctype.h>

void swap (char ,char);
void permutation (char *,int,int);


int main()
{
    char str[20];
    int uc=0,lc=0,sc=0,nc=0;
    printf("Enter the String:\n");//i)
    scanf("%[^\n]s",&str);
    char *ptr = str;
    int length = strlen(str);
    if(length == 8)
    {
        printf("Length of string = 8.\n");

        for(int i=0;i<length;i++)
        {
            if(isupper(*ptr))
            {
                u_count++;
            }
            else if(isdigit(*ptr))
            {
                n_count++;
            }
            else if(ispunct(*ptr))
            {
                 s_count++;
            }
            else if(islower(*ptr))
            {
                l_count++;
            }
            ptr++;
        }
    if(u_count!=0)
    {
        printf("String contains atleast one Uppercase.\n");
    }
    if(l_count!=0)
    {
        printf("String contains atleast one Lowercase.\n");
    }
    if(n_count!=0)
    {
        printf("String contains atleast one Number.\n");
    }
    if(s_count!=0)
    {
        printf("String contains atleast one Special character.\n");
    }
    }
    else if(length > 8)
    {
        printf("The length of the String is greater than 8.\n");
    }
    else
    {
        printf("The length of the String is lesser than 8.\n");
    }
    printf("Permutations of the given string");
    permutation(str,0,length-1);
   
    return 0;
}

void permutation (char *str,int k, int length)
{
    int j;
    if(k==length)
    {
        printf("%s\n",str);
    }
    else{
        for(j=k;j<=length;j++)
        {
            swap((str+k),(str+j));
            permutation(str,k+1,length);
            swap((str+k),(str+j));
        }
    }
}

void swap (char *a,char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}