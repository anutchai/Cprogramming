#include <stdio.h>

void main(){

    // Structure Student 3.1
    typedef struct 
    {
        char id[50];
        char name[50];
        char surname[50];
        int age;
        int income;
    }student;

    // Structure Student 3.2
    student std[3] = {
        {"s001","John","Doe",19,4500},
        {"S002","Ben","Davies",21,7800},
        {"S003","Jordan","Henderson",18,9900},
    };

    // Structure Student 3.3
    for(int i= 0; i < 3; i++){
        if(std[i].income > 5000)
        printf("Student Name : %s \n", std[i].name);
    }
}
