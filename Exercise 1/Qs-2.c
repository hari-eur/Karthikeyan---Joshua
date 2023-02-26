#include <stdio.h>

int main()
{
    int n1,n2;
    char symbol;
    scanf("%d %c %d",&n1,&symbol,&n2);
    switch(symbol)
    {
        case '+':printf("%d",n1+n2);
        break;
        case '-':printf("%d",n1-n2);
        break;
        case '*':printf("%d",n1*n2);
        break;
        case '/':printf("%d",n1/n2);
        break;
        default :printf("Invalid operation");
    }

    return 0;
}