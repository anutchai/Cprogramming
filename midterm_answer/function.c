#include <stdio.h>

int area(int width,int height);

void main (void) {
    int areaall = area(6,8);

    printf("Area : %d" , areaall);
}

int area(int width,int height){

    return width * height;
}








void summation(int num1,int num2,int num3){
    printf("Result : %d", num1+num2+num3);
}


void summation(int num1,int num2,int num3);
    // yourname();
void yourname();
void yourname() {
    printf("Anutchai Chutipascharoen!!");
}