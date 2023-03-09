#include <stdio.h>

int main() 
{
printf("1.TMB\n2.SBI\n3.HDFC\n4.KVB\n5.City Union");
int name;
printf("\nEnter the bank number:\n");
scanf("%d",&name);
switch(name)
{
    case 1:
    printf("TMB\n");
    int cash=200000;
        printf("1.Current\n2.Saving\n3.demat\n");
        int TMB_no;
        printf("Enter the number account type:\n");
        scanf("%d",&TMB_no);
        switch(TMB_no)
        {
            case 1:
            printf("1.Debit\n2.Credit");
            int num;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num);
            switch(num){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
            }
            break;
            case 2:
            printf("1.Debit\n2.Credit");
            int num1;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num1);
            switch(num1){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
            }
            break;
            case 3:
            printf("1.Debit\n2.Credit");
            int num2;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num2);
            switch(num2){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            default:
            printf("enter proper number\n");
            }
            break;
            case 2:
    printf("SBI\n");
    int cash1=200000;
        printf("1.Current\n2.Saving\n3.demat\n");
        int sbi_no;
        printf("Enter the number account type:\n");
        scanf("%d",&sbi_no);
        switch(sbi_no)
        {
            case 1:
            printf("1.Debit\n2.Credit");
            int num;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num);
            switch(num){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash1-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash1+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            
            break;
            case 2:
            printf("1.Debit\n2.Credit");
            int num1;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num1);
            switch(num1){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash1-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash1+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            
            break;
            case 3:
            printf("1.Debit\n2.Credit");
            int num2;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num2);
            switch(num2){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash1-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash1+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            default:
            printf("enter proper number\n");
        }
            break;
            case 3:
    printf("HDFC\n");
    int cash2=200000;
        printf("1.Current\n2.Saving\n3.demat\n");
        int hdfc_no;
        printf("Enter the number account type:\n");
        scanf("%d",&hdfc_no);
        switch(hdfc_no)
        {
            case 1:
            printf("1.Debit\n2.Credit");
            int num;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num);
            switch(num){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash2-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash2+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            
            break;
            case 2:
            printf("1.Debit\n2.Credit");
            int num1;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num1);
            switch(num1){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash2-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash2+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            
            break;
            case 3:
            printf("1.Debit\n2.Credit");
            int num2;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num2);
            switch(num2){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash2-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash2+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            default:
            printf("enter proper number\n");
        }
            break;
            case 4:
    printf("KVB\n");
    int cash3=200000;
        printf("1.Current\n2.Saving\n3.demat\n");
        int kvb_no;
        printf("Enter the number account type:\n");
        scanf("%d",&kvb_no);
        switch(kvb_no)
        {
            case 1:
            printf("1.Debit\n2.Credit");
            int num;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num);
            switch(num){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash3-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash3+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            
            break;
            case 2:
            printf("1.Debit\n2.Credit");
            int num1;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num1);
            switch(num1){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash3-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash3+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            
            break;
            case 3:
            printf("1.Debit\n2.Credit");
            int num2;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num2);
            switch(num2){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash3-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash3+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            break;
            default:
            printf("enter proper number\n");
        }
            
            break;
            case 5:
    printf("City Union\n");
    int cash4=200000;
        printf("1.Current\n2.Saving\n3.demat\n");
        int Union_no;
        printf("Enter the number account type:\n");
        scanf("%d",&Union_no);
        switch(Union_no)
        {
            case 1:
            printf("1.Debit\n2.Credit");
            int num;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num);
            switch(num){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash4-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash4+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            break;
            case 2:
            printf("1.Debit\n2.Credit");
            int num1;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num1);
            switch(num1){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash4-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash4+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            
            break;
            case 3:
            printf("1.Debit\n2.Credit");
            int num2;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num2);
            switch(num2){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash4-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash4+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            break;
            default:
            printf("enter proper number\n");
        }
            
            break;
    default:
        printf("Enter the proper bank number\n");
}


return 0;
}
