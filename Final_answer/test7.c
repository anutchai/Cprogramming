#include <stdio.h>

double findValue(int num, double vat){
    return num * vat;
}

int main() {
    int price;
    double vat = .07;
    printf("Input your price of product : ");
    scanf("%d", &price);
    printf("\nVat = %.2f \n", findValue(price,vat));
}



// #include <stdio.h>
// #define VAT .07  
// #define FINDVALUE(num1,vat) (num1*vat)
// // double findValue(int num, double vat){
// //     return num * vat;
// // }

// int main() {
//     int price;
//     printf("Input your price of product : ");
//     scanf("%d", &price);
//     printf("\nVat = %.2f \n", FINDVALUE(price,VAT));
// }