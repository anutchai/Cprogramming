#include<stdio.h> 

enum status{inactive, active, error}; 

// enum assign enum State {Working = 1, Failed = 0, Freezed = 0}; 

int main() 
{ 
    enum status tag; 
    tag = active; 
    printf("%d",tag); 
    return 0; 
}  