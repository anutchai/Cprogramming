#include<stdio.h> 

enum status{inactive, active, other}; 

int main() 
{ 
    enum status tag; 
    tag = other; 
    printf("Status : %d",tag); 
    return 0; 
}  