#include <stdio.h>

void siri();

void main (void) {

    int num1, num2;
    char c;

    printf("************************************** \n"); 
    printf("Input your first number: ");
    scanf("%d", &num1);
    printf("Input your operator + - * /: ");
    scanf(" %c", &c);
    printf("Input your second number: ");
    scanf("%d", &num2);

    printf("Total : %d \n", num1 * num2);

    printf("************************************** \n"); 
    siri();

}

void siri() {
    printf("Hello Anutchai !!");
}


