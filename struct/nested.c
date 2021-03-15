#include <stdio.h>
#include <string.h>

void main(){

    struct address
    {
        char road[20];
        char province[50];
        int postcode;
    }; 

    struct student
    {
        char name[10];
        int age;
        struct address add;
    };

    struct student std = {"m",29,{"wipa","bkk",10800}};

    printf("Name: %s \n", std.name);

    printf("Road: %s \n", std.add.road);

}