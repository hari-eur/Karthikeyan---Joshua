#include <stdio.h>

int str_len(char []);

int main()
{
    char str[10];
    int uc=0,lc=0,sc=0,nc=0;
    printf("Enter the String:\n");//i)
    scanf("%[^\n]s",&str);
    int l = str_len(str);
    if(l == 8)
    {
        printf("Length of string = 8.\n");

    for(int i=0;i<l;i++)
    {
        if(str[i] >= 65 && str[i] >= 90)
        {
            uc++;
        }
        else if(str[i] >= 48 && str[i] <= 57 )
        {
            nc++;
        }
        else if(str[i] >= 32 && str[i] <= 47 || str[i] >= 58 && str[i] <= 64 || str[i] >= 91 && str[i] <= 96 || str[i] >= 123 && str[i] <= 126 )
        {
            sc++;
        }
        else
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
    else if(l > 8)
    {
        printf("The length of the String is greater than 8.\n");
    }
    else
    {
        printf("The length of the String is lesser than 8.\n");
    }
    return 0;
}
int str_len(char str[])
{
    int count=0,i=0;
    while(str[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}