#include <stdio.h>

void dog();
void addition(int num1, int num2);
double divide(int num1, int num2);

int main(){

    dog();

    addition(7,14);

    printf("Divide: %.2f", divide(50,5));

    return 0;
}

void dog(){

    printf("Hello my dog !! \n");
}

void addition(int num1, int num2){

    printf("Total : %d \n",num1 + num2);
}

double divide(int num1, int num2){

    return num1 / num2 ;
}

