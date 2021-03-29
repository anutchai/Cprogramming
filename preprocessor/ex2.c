#include <stdio.h>  
#include <conio.h>
#include <math.h>
#define PI 3.1415  
// #undef PI  
// พื้นที่วงกลม = pi * r^2

void main() {  

    int r ;
    printf("%f \n",PI);  
    printf("Input Raduis :");
    scanf("%d", &r);

    printf("\n Area : %.2f ", PI * pow(r,2));

    printf("Line :%d\n", __LINE__ );

} 