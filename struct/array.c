#include <stdio.h> 
#include <string.h>

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
    // Create an array of structures 
    Student std[30]; 

    // Access array members 
    strcpy(std[0].name, "Anutchai");
    std[0].income = 12000; 

    strcpy(std[29].name, "Jongruk");
    std[29].income = 18000; 

    printf("Name: %s Salary: %d \n",std[0].name, std[0].income); 
    printf("Name: %s Salary: %d \n",std[29].name, std[29].income); 

    return 0; 
} 