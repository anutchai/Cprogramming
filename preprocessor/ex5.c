#include <stdio.h>
#define VAT .07  
#define SIZE 10

#define ADD(num1,num2) (num1+num2)
#define MIN(a,b) ((a)<(b)?(a):(b))  

int main() {

    char name[SIZE] = "Anutchai";

    printf("Vat = %.2f \n" , 50 * VAT);

    printf("Name =  %s \n" , name);

    printf("Min Value =  %d \n" , MIN(10,20));

    printf("Summary =  %d \n" , ADD(10,20));

    for(int i = 0; i<=SIZE; i++){

        printf("%d \n", i);
    }
    
}