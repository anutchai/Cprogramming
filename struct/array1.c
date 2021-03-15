#include <stdio.h> 
#include <string.h>
#include <conio.h>

typedef struct 
{
    char name[20];
    char surname[20];
    char id[10];
    char class[10];
    int  income;
}Student; 

int main() 
{ 

    Student std[30]; 

    printf("Welcome to system \n");

    for(int i = 0 ; i<=3 ; i++){
        printf("Input Name Student %d : \n", i);
        gets(std[i].name);
    }

    printf("Students List \n");

    for(int i = 0 ; i<=3 ; i++){
        printf("Student Name : %s \n", std[i].name);
    }

    return 0; 
} 