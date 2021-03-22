#include <stdio.h>

void main () {

    int i = 1;
    while (i <= 5)
    {
        printf("The number is : %d \n", i);
        i++;
    }
    
    do{
        printf("The number is : %d \n", i);
        i++;
    }while (i <= 5);

    for(int i = 1 ; i <= 5 ; i++){
        printf("The number is : %d \n", i);
    }

}