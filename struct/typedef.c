#include <stdio.h>

void main(){

    typedef struct
    {
        char name[10];
        int age;
        float income;   
    }STUDENT;

    STUDENT std;

    std.age = 29;

    printf("Age: %d" , std.age);
    
}







    // typedef int NUMBER;

    // NUMBER age;

    // age = 20;

    // printf("Number: %d", age );