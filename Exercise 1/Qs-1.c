#include <stdio.h>
#include <stdint.h>


int REGISTER = 0;

void enable(){
    REGISTER = REGISTER | 1 << 0;
}

void disable(){
    REGISTER = 0;
}

void subscribe() {
    REGISTER |= 1 << 1;
}

void transmit() {
    REGISTER ^= 1 << 2;
}

void print(){
    for (int i = 7; i >= 0; i--){
        printf("%d", REGISTER >> i & 1);
    } 
    printf("\n");
}

int main()
{
    printf("1 - Enable Register\n2 - Disable Register\n3 - Subscribe\n4 - Transmit\n");
    int input;
    while(1){
        printf("Enter: ");
        scanf("%d", &input);

        switch(input){
            case 1:
                enable();
                break;
            case 2:
                disable();
                break;
            case 3:
                subscribe();
                break;
            case 4:
                transmit();
                break;
        }
        print();
    }
    
}