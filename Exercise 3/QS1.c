#include <stdio.h>
#define print printf

int main()
{
    char data[20],data_1[10],data_2[20];
    scanf("%s %s %s",data,data_1,data_2);
    print("Welcome to %s",data);
    print("\nHello to %s: Welcome to %s",data_1,data_2);

    return 0;
}
