#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[20];
    int uc=0,lc=0,sc=0,nc=0;
    printf("Enter the String:\n");//i)
    scanf("%[^\n]s",&str);
    int len = strlen(str);
    if(len==8)
    {
        printf("Length of string = 8.\n");

    for(int i=0;i<len;i++)
    {
        if(isupper(str[i]))
        {
            uc++;
        }
        else if(isdigit(str[i]))
        {
            nc++;
        }
        else if(ispunct(str[i]))
        {
            sc++;
        }
        else if(islower(str[i]))
        {
            lc++;
        }
    }
    if(uc!=0)
    {
        printf("String contains atleast one Uppercase.\n");
    }
    if(lc!=0)
    {
        printf("String contains atleast one Lowercase.\n");
    }
    if(nc!=0)
    {
        printf("String contains atleast one Number.\n");
    }
    if(sc!=0)
    {
        printf("String contains atleast one Special character.\n");
    }
    }
    else if(len > 8)
    {
        printf("The length of the String is greater than 8.\n");
    }
    else
    {
        printf("Length of String is not 8.\n");
    }
   
    return 0;
}
