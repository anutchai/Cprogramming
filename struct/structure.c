#include <stdio.h>
#include <string.h>
void main(){

    // step 1
    struct student
    {
        char name[10];
        int age;
        float income;
    }std = {"Anutchai",29,35000.50};
    

    // step 4
    printf("Student Name: %s \n", std.name);
    printf("Student Age: %d \n", std.age);
    printf("Student Income: %.2f \n", std.income);

}




     // step 2
    // struct student std;

    // // step 3
    // strcpy(std.name, "Anutchai");
    // std.age = 29;
    // std.income = 35000.50;
